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

// Function: sub_003611F0
// Address: 0x3611f0 - 0x361478
void sub_003611F0_0x3611f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003611F0_0x3611f0");
#endif

    switch (ctx->pc) {
        case 0x36125cu: goto label_36125c;
        case 0x361268u: goto label_361268;
        case 0x361274u: goto label_361274;
        case 0x361280u: goto label_361280;
        case 0x3612a8u: goto label_3612a8;
        case 0x3612bcu: goto label_3612bc;
        case 0x3612d0u: goto label_3612d0;
        case 0x3612e4u: goto label_3612e4;
        case 0x3613e0u: goto label_3613e0;
        case 0x3613f8u: goto label_3613f8;
        case 0x361408u: goto label_361408;
        case 0x361420u: goto label_361420;
        case 0x361450u: goto label_361450;
        default: break;
    }

    ctx->pc = 0x3611f0u;

    // 0x3611f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3611f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3611f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3611f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3611f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3611f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3611fc: 0x90862b24  lbu         $a2, 0x2B24($a0)
    ctx->pc = 0x3611fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x361200: 0x10c00089  beqz        $a2, . + 4 + (0x89 << 2)
    ctx->pc = 0x361200u;
    {
        const bool branch_taken_0x361200 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x361204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361200u;
        // 0x361204: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361200) {
            ctx->pc = 0x361428u;
            goto label_361428;
        }
    }
    ctx->pc = 0x361208u;
    // 0x361208: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x361208u;
    {
        const bool branch_taken_0x361208 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x36120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361208u;
        // 0x36120c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361208) {
            ctx->pc = 0x361244u;
            goto label_361244;
        }
    }
    ctx->pc = 0x361210u;
    // 0x361210: 0x8e0429c0  lw          $a0, 0x29C0($s0)
    ctx->pc = 0x361210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x361214: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x361214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x361218: 0x96032b20  lhu         $v1, 0x2B20($s0)
    ctx->pc = 0x361218u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x36121c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x36121cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x361220: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x361220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361224: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x361224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x361228: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x361228u;
    {
        const bool branch_taken_0x361228 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x361228) {
            ctx->pc = 0x361238u;
            goto label_361238;
        }
    }
    ctx->pc = 0x361230u;
    // 0x361230: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x361230u;
    {
        const bool branch_taken_0x361230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361230) {
            ctx->pc = 0x361240u;
            goto label_361240;
        }
    }
    ctx->pc = 0x361238u;
label_361238:
    // 0x361238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x361238u;
    {
        const bool branch_taken_0x361238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361238u;
        // 0x36123c: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361238) {
            ctx->pc = 0x361244u;
            goto label_361244;
        }
    }
    ctx->pc = 0x361240u;
label_361240:
    // 0x361240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361244:
    // 0x361244: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x361244u;
    {
        const bool branch_taken_0x361244 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x361244) {
            ctx->pc = 0x361310u;
            goto label_361310;
        }
    }
    ctx->pc = 0x36124Cu;
    // 0x36124c: 0xa2002b24  sb          $zero, 0x2B24($s0)
    ctx->pc = 0x36124cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 0));
    // 0x361250: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x361250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x361254: 0xc0a8524  jal         func_2A1490
    ctx->pc = 0x361254u;
    SET_GPR_U32(ctx, 31, 0x36125Cu);
    ctx->pc = 0x361258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361254u;
    // 0x361258: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1490u, 0x361254u, 0x36125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36125Cu;
label_36125c:
    // 0x36125c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x36125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x361260: 0xc0a8524  jal         func_2A1490
    ctx->pc = 0x361260u;
    SET_GPR_U32(ctx, 31, 0x361268u);
    ctx->pc = 0x361264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361260u;
    // 0x361264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1490u, 0x361260u, 0x361268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361268u;
label_361268:
    // 0x361268: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x361268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x36126c: 0xc0a8524  jal         func_2A1490
    ctx->pc = 0x36126Cu;
    SET_GPR_U32(ctx, 31, 0x361274u);
    ctx->pc = 0x361270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36126Cu;
    // 0x361270: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1490u, 0x36126Cu, 0x361274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361274u;
label_361274:
    // 0x361274: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x361274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x361278: 0xc0a8508  jal         func_2A1420
    ctx->pc = 0x361278u;
    SET_GPR_U32(ctx, 31, 0x361280u);
    ctx->pc = 0x36127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361278u;
    // 0x36127c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1420u, 0x361278u, 0x361280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361280u;
label_361280:
    // 0x361280: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x361280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x361284: 0x2402008d  addiu       $v0, $zero, 0x8D
    ctx->pc = 0x361284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x361288: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x361288u;
    {
        const bool branch_taken_0x361288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361288u;
        // 0x36128c: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361288) {
            ctx->pc = 0x3612C8u;
            goto label_3612c8;
        }
    }
    ctx->pc = 0x361290u;
    // 0x361290: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x361290u;
    {
        const bool branch_taken_0x361290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x361290) {
            ctx->pc = 0x3612A0u;
            goto label_3612a0;
        }
    }
    ctx->pc = 0x361298u;
    // 0x361298: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x361298u;
    {
        const bool branch_taken_0x361298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361298) {
            ctx->pc = 0x3612E8u;
            goto label_3612e8;
        }
    }
    ctx->pc = 0x3612A0u;
label_3612a0:
    // 0x3612a0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3612A0u;
    SET_GPR_U32(ctx, 31, 0x3612A8u);
    ctx->pc = 0x3612A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3612A0u;
    // 0x3612a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3612A0u, 0x3612A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3612A8u;
label_3612a8:
    // 0x3612a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3612a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3612ac: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3612acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3612b0: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x3612b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3612b4: 0xc0a9e08  jal         func_2A7820
    ctx->pc = 0x3612B4u;
    SET_GPR_U32(ctx, 31, 0x3612BCu);
    ctx->pc = 0x3612B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3612B4u;
    // 0x3612b8: 0x920508e8  lbu         $a1, 0x8E8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7820u, 0x3612B4u, 0x3612BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3612BCu;
label_3612bc:
    // 0x3612bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3612BCu;
    {
        const bool branch_taken_0x3612bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3612bc) {
            ctx->pc = 0x3612E8u;
            goto label_3612e8;
        }
    }
    ctx->pc = 0x3612C4u;
    // 0x3612c4: 0x0  nop
    ctx->pc = 0x3612c4u;
    // NOP
label_3612c8:
    // 0x3612c8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3612C8u;
    SET_GPR_U32(ctx, 31, 0x3612D0u);
    ctx->pc = 0x3612CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3612C8u;
    // 0x3612cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3612C8u, 0x3612D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3612D0u;
label_3612d0:
    // 0x3612d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3612d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3612d4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3612d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3612d8: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x3612d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3612dc: 0xc0a9eec  jal         func_2A7BB0
    ctx->pc = 0x3612DCu;
    SET_GPR_U32(ctx, 31, 0x3612E4u);
    ctx->pc = 0x3612E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3612DCu;
    // 0x3612e0: 0x920508e8  lbu         $a1, 0x8E8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7BB0u, 0x3612DCu, 0x3612E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3612E4u;
label_3612e4:
    // 0x3612e4: 0x0  nop
    ctx->pc = 0x3612e4u;
    // NOP
label_3612e8:
    // 0x3612e8: 0x96042b22  lhu         $a0, 0x2B22($s0)
    ctx->pc = 0x3612e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3612ec: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3612ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3612f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3612f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3612f4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x3612f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3612f8: 0x96042b22  lhu         $a0, 0x2B22($s0)
    ctx->pc = 0x3612f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3612fc: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3612fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x361300: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x361300u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x361304: 0xa2020239  sb          $v0, 0x239($s0)
    ctx->pc = 0x361304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 569), (uint8_t)GPR_U32(ctx, 2));
    // 0x361308: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x361308u;
    {
        const bool branch_taken_0x361308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361308u;
        // 0x36130c: 0xa20229d1  sb          $v0, 0x29D1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361308) {
            ctx->pc = 0x361448u;
            goto label_361448;
        }
    }
    ctx->pc = 0x361310u;
label_361310:
    // 0x361310: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x361310u;
    {
        const bool branch_taken_0x361310 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x361314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361310u;
        // 0x361314: 0x96052b20  lhu         $a1, 0x2B20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361310) {
            ctx->pc = 0x361344u;
            goto label_361344;
        }
    }
    ctx->pc = 0x361318u;
    // 0x361318: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x361318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x36131c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36131cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x361320: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x361320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x361324: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x361324u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361328: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x361328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36132c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x36132Cu;
    {
        const bool branch_taken_0x36132c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x361330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36132Cu;
        // 0x361330: 0x623823  subu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36132c) {
            ctx->pc = 0x36133Cu;
            goto label_36133c;
        }
    }
    ctx->pc = 0x361334u;
    // 0x361334: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x361334u;
    {
        const bool branch_taken_0x361334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361334u;
        // 0x361338: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361334) {
            ctx->pc = 0x361348u;
            goto label_361348;
        }
    }
    ctx->pc = 0x36133Cu;
label_36133c:
    // 0x36133c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36133Cu;
    {
        const bool branch_taken_0x36133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36133Cu;
        // 0x361340: 0x3c036666  lui         $v1, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36133c) {
            ctx->pc = 0x36134Cu;
            goto label_36134c;
        }
    }
    ctx->pc = 0x361344u;
label_361344:
    // 0x361344: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x361344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361348:
    // 0x361348: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x361348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_36134c:
    // 0x36134c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x36134cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x361350: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x361350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x361354: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x361354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x361358: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x361358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x36135c: 0x0  nop
    ctx->pc = 0x36135cu;
    // NOP
    // 0x361360: 0x0  nop
    ctx->pc = 0x361360u;
    // NOP
    // 0x361364: 0x1810  mfhi        $v1
    ctx->pc = 0x361364u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x361368: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x361368u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x36136c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x36136cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x361370: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x361370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x361374: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x361374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x361378: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x361378u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x36137c: 0x0  nop
    ctx->pc = 0x36137cu;
    // NOP
    // 0x361380: 0x0  nop
    ctx->pc = 0x361380u;
    // NOP
    // 0x361384: 0x1812  mflo        $v1
    ctx->pc = 0x361384u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x361388: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x361388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36138c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x36138cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x361390: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x361390u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x361394: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x361394u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x361398: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x361398u;
    {
        const bool branch_taken_0x361398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361398u;
        // 0x36139c: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361398) {
            ctx->pc = 0x361448u;
            goto label_361448;
        }
    }
    ctx->pc = 0x3613A0u;
    // 0x3613a0: 0xa2032b24  sb          $v1, 0x2B24($s0)
    ctx->pc = 0x3613a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 3));
    // 0x3613a4: 0x2442a390  addiu       $v0, $v0, -0x5C70
    ctx->pc = 0x3613a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x3613a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3613a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3613ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3613acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3613b0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3613b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3613b4: 0x2402008d  addiu       $v0, $zero, 0x8D
    ctx->pc = 0x3613b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x3613b8: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3613b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3613bc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3613BCu;
    {
        const bool branch_taken_0x3613bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3613bc) {
            ctx->pc = 0x361400u;
            goto label_361400;
        }
    }
    ctx->pc = 0x3613C4u;
    // 0x3613c4: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x3613c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x3613c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3613C8u;
    {
        const bool branch_taken_0x3613c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3613c8) {
            ctx->pc = 0x3613D8u;
            goto label_3613d8;
        }
    }
    ctx->pc = 0x3613D0u;
    // 0x3613d0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3613D0u;
    {
        const bool branch_taken_0x3613d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3613d0) {
            ctx->pc = 0x361448u;
            goto label_361448;
        }
    }
    ctx->pc = 0x3613D8u;
label_3613d8:
    // 0x3613d8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3613D8u;
    SET_GPR_U32(ctx, 31, 0x3613E0u);
    ctx->pc = 0x3613DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3613D8u;
    // 0x3613dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3613D8u, 0x3613E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3613E0u;
label_3613e0:
    // 0x3613e0: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3613e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3613e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3613e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3613e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3613ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613f0: 0xc0a9e2c  jal         func_2A78B0
    ctx->pc = 0x3613F0u;
    SET_GPR_U32(ctx, 31, 0x3613F8u);
    ctx->pc = 0x3613F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3613F0u;
    // 0x3613f4: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A78B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A78B0u, 0x3613F0u, 0x3613F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3613F8u;
label_3613f8:
    // 0x3613f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3613F8u;
    {
        const bool branch_taken_0x3613f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3613f8) {
            ctx->pc = 0x361448u;
            goto label_361448;
        }
    }
    ctx->pc = 0x361400u;
label_361400:
    // 0x361400: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x361400u;
    SET_GPR_U32(ctx, 31, 0x361408u);
    ctx->pc = 0x361404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361400u;
    // 0x361404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x361400u, 0x361408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361408u;
label_361408:
    // 0x361408: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x361408u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x36140c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36140cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361410: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361414: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x361414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361418: 0xc0a9efc  jal         func_2A7BF0
    ctx->pc = 0x361418u;
    SET_GPR_U32(ctx, 31, 0x361420u);
    ctx->pc = 0x36141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361418u;
    // 0x36141c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7BF0u, 0x361418u, 0x361420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361420u;
label_361420:
    // 0x361420: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x361420u;
    {
        const bool branch_taken_0x361420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361420) {
            ctx->pc = 0x361448u;
            goto label_361448;
        }
    }
    ctx->pc = 0x361428u;
label_361428:
    // 0x361428: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x361428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x36142c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x36142cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361430: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x361430u;
    {
        const bool branch_taken_0x361430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361430u;
        // 0x361434: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361430) {
            ctx->pc = 0x361448u;
            goto label_361448;
        }
    }
    ctx->pc = 0x361438u;
    // 0x361438: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x361438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x36143c: 0xa603022a  sh          $v1, 0x22A($s0)
    ctx->pc = 0x36143cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 3));
    // 0x361440: 0xa602022e  sh          $v0, 0x22E($s0)
    ctx->pc = 0x361440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 2));
    // 0x361444: 0xa6000228  sh          $zero, 0x228($s0)
    ctx->pc = 0x361444u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 0));
label_361448:
    // 0x361448: 0xc0a6188  jal         func_298620
    ctx->pc = 0x361448u;
    SET_GPR_U32(ctx, 31, 0x361450u);
    ctx->pc = 0x36144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361448u;
    // 0x36144c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x361448u, 0x361450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361450u;
label_361450:
    // 0x361450: 0x92032b26  lbu         $v1, 0x2B26($s0)
    ctx->pc = 0x361450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11046)));
    // 0x361454: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x361454u;
    {
        const bool branch_taken_0x361454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x361454) {
            ctx->pc = 0x361468u;
            goto label_361468;
        }
    }
    ctx->pc = 0x36145Cu;
    // 0x36145c: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x36145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x361460: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x361460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x361464: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x361464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
label_361468:
    // 0x361468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x361468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36146c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36146cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361470: 0x3e00008  jr          $ra
    ctx->pc = 0x361470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361470u;
        // 0x361474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361478u;
}
