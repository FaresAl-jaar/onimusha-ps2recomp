#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351120
// Address: 0x351120 - 0x351304
void sub_00351120_0x351120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351120_0x351120");
#endif

    switch (ctx->pc) {
        case 0x35117cu: goto label_35117c;
        case 0x351198u: goto label_351198;
        case 0x3511c0u: goto label_3511c0;
        case 0x3511f0u: goto label_3511f0;
        case 0x351210u: goto label_351210;
        case 0x351234u: goto label_351234;
        case 0x351248u: goto label_351248;
        case 0x351264u: goto label_351264;
        case 0x351278u: goto label_351278;
        case 0x351288u: goto label_351288;
        case 0x351294u: goto label_351294;
        case 0x3512bcu: goto label_3512bc;
        case 0x3512d0u: goto label_3512d0;
        case 0x3512e0u: goto label_3512e0;
        default: break;
    }

    ctx->pc = 0x351120u;

    // 0x351120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351124: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x351124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x351128: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x351128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35112c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x351130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x351130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x351134: 0x8c25ea24  lw          $a1, -0x15DC($at)
    ctx->pc = 0x351134u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x351138: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x351138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x35113c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x35113cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x351140: 0x8c30ea28  lw          $s0, -0x15D8($at)
    ctx->pc = 0x351140u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x351144: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x351144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x351148: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x351148u;
    {
        const bool branch_taken_0x351148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351148u;
        // 0x35114c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351148) {
            ctx->pc = 0x3512E8u;
            goto label_3512e8;
        }
    }
    ctx->pc = 0x351150u;
    // 0x351150: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x351150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x351154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x351158: 0x2463f740  addiu       $v1, $v1, -0x8C0
    ctx->pc = 0x351158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965056));
    // 0x35115c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x351160: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x351160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x351164: 0x400008  jr          $v0
    ctx->pc = 0x351164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x351170u: goto label_351170;
            case 0x3511A0u: goto label_3511a0;
            case 0x351280u: goto label_351280;
            case 0x3512A0u: goto label_3512a0;
            case 0x3512A8u: goto label_3512a8;
            case 0x3512D8u: goto label_3512d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351164u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35116Cu;
    // 0x35116c: 0x0  nop
    ctx->pc = 0x35116cu;
    // NOP
label_351170:
    // 0x351170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x351170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351174: 0xc0d44d0  jal         func_351340
    ctx->pc = 0x351174u;
    SET_GPR_U32(ctx, 31, 0x35117Cu);
    ctx->pc = 0x351178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351174u;
    // 0x351178: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351340u, 0x351174u, 0x35117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35117Cu;
label_35117c:
    // 0x35117c: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x35117cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x351180: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x351180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x351184: 0x10a00058  beqz        $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x351184u;
    {
        const bool branch_taken_0x351184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x351188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351184u;
        // 0x351188: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351184) {
            ctx->pc = 0x3512E8u;
            goto label_3512e8;
        }
    }
    ctx->pc = 0x35118Cu;
    // 0x35118c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35118cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351190: 0xc0d3a34  jal         func_34E8D0
    ctx->pc = 0x351190u;
    SET_GPR_U32(ctx, 31, 0x351198u);
    ctx->pc = 0x351194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351190u;
    // 0x351194: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E8D0u, 0x351190u, 0x351198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351198u;
label_351198:
    // 0x351198: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x351198u;
    {
        const bool branch_taken_0x351198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351198) {
            ctx->pc = 0x3512E8u;
            goto label_3512e8;
        }
    }
    ctx->pc = 0x3511A0u;
label_3511a0:
    // 0x3511a0: 0x30a22000  andi        $v0, $a1, 0x2000
    ctx->pc = 0x3511a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x3511a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3511A4u;
    {
        const bool branch_taken_0x3511a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3511a4) {
            ctx->pc = 0x3511D0u;
            goto label_3511d0;
        }
    }
    ctx->pc = 0x3511ACu;
    // 0x3511ac: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3511acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3511b0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3511b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3511b4: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x3511b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x3511b8: 0xc0d42d8  jal         func_350B60
    ctx->pc = 0x3511B8u;
    SET_GPR_U32(ctx, 31, 0x3511C0u);
    ctx->pc = 0x3511BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3511B8u;
    // 0x3511bc: 0x3445030f  ori         $a1, $v0, 0x30F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    ctx->in_delay_slot = false;
    ctx->pc = 0x350B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350B60u, 0x3511B8u, 0x3511C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3511C0u;
label_3511c0:
    // 0x3511c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3511c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3511c4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3511C4u;
    {
        const bool branch_taken_0x3511c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3511C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511C4u;
        // 0x3511c8: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3511c4) {
            ctx->pc = 0x3512E8u;
            goto label_3512e8;
        }
    }
    ctx->pc = 0x3511CCu;
    // 0x3511cc: 0x0  nop
    ctx->pc = 0x3511ccu;
    // NOP
label_3511d0:
    // 0x3511d0: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x3511d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x3511d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3511D4u;
    {
        const bool branch_taken_0x3511d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3511d4) {
            ctx->pc = 0x351218u;
            goto label_351218;
        }
    }
    ctx->pc = 0x3511DCu;
    // 0x3511dc: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3511dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3511e0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3511e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3511e4: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x3511e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x3511e8: 0xc0d42d8  jal         func_350B60
    ctx->pc = 0x3511E8u;
    SET_GPR_U32(ctx, 31, 0x3511F0u);
    ctx->pc = 0x3511ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3511E8u;
    // 0x3511ec: 0x3445030f  ori         $a1, $v0, 0x30F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    ctx->in_delay_slot = false;
    ctx->pc = 0x350B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350B60u, 0x3511E8u, 0x3511F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3511F0u;
label_3511f0:
    // 0x3511f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3511f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3511f4: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x3511f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3511f8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3511f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3511fc: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3511FCu;
    {
        const bool branch_taken_0x3511fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x351200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511FCu;
        // 0x351200: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3511fc) {
            ctx->pc = 0x3512E8u;
            goto label_3512e8;
        }
    }
    ctx->pc = 0x351204u;
    // 0x351204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x351204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351208: 0xc0d3a34  jal         func_34E8D0
    ctx->pc = 0x351208u;
    SET_GPR_U32(ctx, 31, 0x351210u);
    ctx->pc = 0x35120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351208u;
    // 0x35120c: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E8D0u, 0x351208u, 0x351210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351210u;
label_351210:
    // 0x351210: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x351210u;
    {
        const bool branch_taken_0x351210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351210) {
            ctx->pc = 0x3512E8u;
            goto label_3512e8;
        }
    }
    ctx->pc = 0x351218u;
label_351218:
    // 0x351218: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x351218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x35121c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x35121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x351220: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x351220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x351224: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x351224u;
    {
        const bool branch_taken_0x351224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351224) {
            ctx->pc = 0x351248u;
            goto label_351248;
        }
    }
    ctx->pc = 0x35122Cu;
    // 0x35122c: 0xc0d43a8  jal         func_350EA0
    ctx->pc = 0x35122Cu;
    SET_GPR_U32(ctx, 31, 0x351234u);
    ctx->pc = 0x350EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350EA0u, 0x35122Cu, 0x351234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351234u;
label_351234:
    // 0x351234: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x351234u;
    {
        const bool branch_taken_0x351234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351234u;
        // 0x351238: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351234) {
            ctx->pc = 0x351248u;
            goto label_351248;
        }
    }
    ctx->pc = 0x35123Cu;
    // 0x35123c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x35123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x351240: 0xc0d42d8  jal         func_350B60
    ctx->pc = 0x351240u;
    SET_GPR_U32(ctx, 31, 0x351248u);
    ctx->pc = 0x351244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351240u;
    // 0x351244: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350B60u, 0x351240u, 0x351248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351248u;
label_351248:
    // 0x351248: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x351248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x35124c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x35124cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x351250: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x351250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x351254: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x351254u;
    {
        const bool branch_taken_0x351254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351254u;
        // 0x351258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351254) {
            ctx->pc = 0x3512E8u;
            goto label_3512e8;
        }
    }
    ctx->pc = 0x35125Cu;
    // 0x35125c: 0xc0d43e4  jal         func_350F90
    ctx->pc = 0x35125Cu;
    SET_GPR_U32(ctx, 31, 0x351264u);
    ctx->pc = 0x350F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350F90u, 0x35125Cu, 0x351264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351264u;
label_351264:
    // 0x351264: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x351264u;
    {
        const bool branch_taken_0x351264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351264u;
        // 0x351268: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351264) {
            ctx->pc = 0x3512E8u;
            goto label_3512e8;
        }
    }
    ctx->pc = 0x35126Cu;
    // 0x35126c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x35126cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x351270: 0xc0d42d8  jal         func_350B60
    ctx->pc = 0x351270u;
    SET_GPR_U32(ctx, 31, 0x351278u);
    ctx->pc = 0x351274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351270u;
    // 0x351274: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350B60u, 0x351270u, 0x351278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351278u;
label_351278:
    // 0x351278: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x351278u;
    {
        const bool branch_taken_0x351278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351278) {
            ctx->pc = 0x3512E8u;
            goto label_3512e8;
        }
    }
    ctx->pc = 0x351280u;
label_351280:
    // 0x351280: 0xc0d4388  jal         func_350E20
    ctx->pc = 0x351280u;
    SET_GPR_U32(ctx, 31, 0x351288u);
    ctx->pc = 0x351284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351280u;
    // 0x351284: 0x82250018  lb          $a1, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E20u, 0x351280u, 0x351288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351288u;
label_351288:
    // 0x351288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x351288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35128c: 0xc0d45b0  jal         func_3516C0
    ctx->pc = 0x35128Cu;
    SET_GPR_U32(ctx, 31, 0x351294u);
    ctx->pc = 0x351290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35128Cu;
    // 0x351290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3516C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3516C0u, 0x35128Cu, 0x351294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351294u;
label_351294:
    // 0x351294: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x351294u;
    {
        const bool branch_taken_0x351294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351294u;
        // 0x351298: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351294) {
            ctx->pc = 0x3512E8u;
            goto label_3512e8;
        }
    }
    ctx->pc = 0x35129Cu;
    // 0x35129c: 0x0  nop
    ctx->pc = 0x35129cu;
    // NOP
label_3512a0:
    // 0x3512a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3512A0u;
    {
        const bool branch_taken_0x3512a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3512A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512A0u;
        // 0x3512a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3512a0) {
            ctx->pc = 0x3512F0u;
            goto label_3512f0;
        }
    }
    ctx->pc = 0x3512A8u;
label_3512a8:
    // 0x3512a8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3512a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3512ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3512ACu;
    {
        const bool branch_taken_0x3512ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3512B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512ACu;
        // 0x3512b0: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3512ac) {
            ctx->pc = 0x3512C8u;
            goto label_3512c8;
        }
    }
    ctx->pc = 0x3512B4u;
    // 0x3512b4: 0xc0d3a60  jal         func_34E980
    ctx->pc = 0x3512B4u;
    SET_GPR_U32(ctx, 31, 0x3512BCu);
    ctx->pc = 0x3512B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3512B4u;
    // 0x3512b8: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E980u, 0x3512B4u, 0x3512BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512BCu;
label_3512bc:
    // 0x3512bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3512BCu;
    {
        const bool branch_taken_0x3512bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3512bc) {
            ctx->pc = 0x3512E8u;
            goto label_3512e8;
        }
    }
    ctx->pc = 0x3512C4u;
    // 0x3512c4: 0x0  nop
    ctx->pc = 0x3512c4u;
    // NOP
label_3512c8:
    // 0x3512c8: 0xc0d44c4  jal         func_351310
    ctx->pc = 0x3512C8u;
    SET_GPR_U32(ctx, 31, 0x3512D0u);
    ctx->pc = 0x3512CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3512C8u;
    // 0x3512cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351310u, 0x3512C8u, 0x3512D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512D0u;
label_3512d0:
    // 0x3512d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3512D0u;
    {
        const bool branch_taken_0x3512d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3512D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512D0u;
        // 0x3512d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3512d0) {
            ctx->pc = 0x3512F0u;
            goto label_3512f0;
        }
    }
    ctx->pc = 0x3512D8u;
label_3512d8:
    // 0x3512d8: 0xc0d44c4  jal         func_351310
    ctx->pc = 0x3512D8u;
    SET_GPR_U32(ctx, 31, 0x3512E0u);
    ctx->pc = 0x351310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351310u, 0x3512D8u, 0x3512E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512E0u;
label_3512e0:
    // 0x3512e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3512E0u;
    {
        const bool branch_taken_0x3512e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3512E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512E0u;
        // 0x3512e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3512e0) {
            ctx->pc = 0x3512F0u;
            goto label_3512f0;
        }
    }
    ctx->pc = 0x3512E8u;
label_3512e8:
    // 0x3512e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3512e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3512ec: 0x0  nop
    ctx->pc = 0x3512ecu;
    // NOP
label_3512f0:
    // 0x3512f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3512f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3512f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3512f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3512f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3512f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3512fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3512FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512FCu;
        // 0x351300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3512FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351304u;
}
