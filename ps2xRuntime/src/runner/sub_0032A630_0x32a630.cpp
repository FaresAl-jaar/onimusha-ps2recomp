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

// Function: sub_0032A630
// Address: 0x32a630 - 0x32a794
void sub_0032A630_0x32a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A630_0x32a630");
#endif

    switch (ctx->pc) {
        case 0x32a650u: goto label_32a650;
        case 0x32a660u: goto label_32a660;
        case 0x32a698u: goto label_32a698;
        case 0x32a73cu: goto label_32a73c;
        case 0x32a744u: goto label_32a744;
        case 0x32a750u: goto label_32a750;
        case 0x32a760u: goto label_32a760;
        case 0x32a768u: goto label_32a768;
        default: break;
    }

    ctx->pc = 0x32a630u;

    // 0x32a630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32a638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a63c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32a640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a644: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32a644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a648: 0xc0ca9fc  jal         func_32A7F0
    ctx->pc = 0x32A648u;
    SET_GPR_U32(ctx, 31, 0x32A650u);
    ctx->pc = 0x32A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A648u;
    // 0x32a64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A7F0u, 0x32A648u, 0x32A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A650u;
label_32a650:
    // 0x32a650: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32a650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32a654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32a654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a658: 0x24a59800  addiu       $a1, $a1, -0x6800
    ctx->pc = 0x32a658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940672));
    // 0x32a65c: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x32a65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_32a660:
    // 0x32a660: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x32a660u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32a664: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A664u;
    {
        const bool branch_taken_0x32a664 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x32A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A664u;
        // 0x32a668: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a664) {
            ctx->pc = 0x32A678u;
            goto label_32a678;
        }
    }
    ctx->pc = 0x32A66Cu;
    // 0x32a66c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32A66Cu;
    {
        const bool branch_taken_0x32a66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A66Cu;
        // 0x32a670: 0xa2230007  sb          $v1, 0x7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a66c) {
            ctx->pc = 0x32A688u;
            goto label_32a688;
        }
    }
    ctx->pc = 0x32A674u;
    // 0x32a674: 0x0  nop
    ctx->pc = 0x32a674u;
    // NOP
label_32a678:
    // 0x32a678: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32a678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32a67c: 0x2cc30014  sltiu       $v1, $a2, 0x14
    ctx->pc = 0x32a67cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x32a680: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x32A680u;
    {
        const bool branch_taken_0x32a680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A680u;
        // 0x32a684: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a680) {
            ctx->pc = 0x32A660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a660;
        }
    }
    ctx->pc = 0x32A688u;
label_32a688:
    // 0x32a688: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x32A688u;
    {
        const bool branch_taken_0x32a688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A688u;
        // 0x32a68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a688) {
            ctx->pc = 0x32A780u;
            goto label_32a780;
        }
    }
    ctx->pc = 0x32A690u;
    // 0x32a690: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x32A690u;
    SET_GPR_U32(ctx, 31, 0x32A698u);
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x32A690u, 0x32A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A698u;
label_32a698:
    // 0x32a698: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32a698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32a69c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32a6a0: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x32a6a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x32a6a4: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32A6A4u;
    {
        const bool branch_taken_0x32a6a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6A4u;
        // 0x32a6a8: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a6a4) {
            ctx->pc = 0x32A6F8u;
            goto label_32a6f8;
        }
    }
    ctx->pc = 0x32A6ACu;
    // 0x32a6ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32a6b0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x32A6B0u;
    {
        const bool branch_taken_0x32a6b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6B0u;
        // 0x32a6b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a6b0) {
            ctx->pc = 0x32A6E0u;
            goto label_32a6e0;
        }
    }
    ctx->pc = 0x32A6B8u;
    // 0x32a6b8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A6B8u;
    {
        const bool branch_taken_0x32a6b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32a6b8) {
            ctx->pc = 0x32A6C8u;
            goto label_32a6c8;
        }
    }
    ctx->pc = 0x32A6C0u;
    // 0x32a6c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x32A6C0u;
    {
        const bool branch_taken_0x32a6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a6c0) {
            ctx->pc = 0x32A720u;
            goto label_32a720;
        }
    }
    ctx->pc = 0x32A6C8u;
label_32a6c8:
    // 0x32a6c8: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x32a6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x32a6cc: 0x24031292  addiu       $v1, $zero, 0x1292
    ctx->pc = 0x32a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4754));
    // 0x32a6d0: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x32A6D0u;
    {
        const bool branch_taken_0x32a6d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a6d0) {
            ctx->pc = 0x32A720u;
            goto label_32a720;
        }
    }
    ctx->pc = 0x32A6D8u;
    // 0x32a6d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x32A6D8u;
    {
        const bool branch_taken_0x32a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a6d8) {
            ctx->pc = 0x32A780u;
            goto label_32a780;
        }
    }
    ctx->pc = 0x32A6E0u;
label_32a6e0:
    // 0x32a6e0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x32a6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x32a6e4: 0x2402128f  addiu       $v0, $zero, 0x128F
    ctx->pc = 0x32a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4751));
    // 0x32a6e8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32A6E8u;
    {
        const bool branch_taken_0x32a6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32a6e8) {
            ctx->pc = 0x32A720u;
            goto label_32a720;
        }
    }
    ctx->pc = 0x32A6F0u;
    // 0x32a6f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32A6F0u;
    {
        const bool branch_taken_0x32a6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6F0u;
        // 0x32a6f4: 0x641012ec  daddiu      $s0, $zero, 0x12EC (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4844);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a6f0) {
            ctx->pc = 0x32A720u;
            goto label_32a720;
        }
    }
    ctx->pc = 0x32A6F8u;
label_32a6f8:
    // 0x32a6f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32a6fc: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x32a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x32a700: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x32a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x32a704: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A704u;
    {
        const bool branch_taken_0x32a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a704) {
            ctx->pc = 0x32A720u;
            goto label_32a720;
        }
    }
    ctx->pc = 0x32A70Cu;
    // 0x32a70c: 0x82220007  lb          $v0, 0x7($s1)
    ctx->pc = 0x32a70cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x32a710: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A710u;
    {
        const bool branch_taken_0x32a710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A710u;
        // 0x32a714: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a710) {
            ctx->pc = 0x32A720u;
            goto label_32a720;
        }
    }
    ctx->pc = 0x32A718u;
    // 0x32a718: 0xa2220164  sb          $v0, 0x164($s1)
    ctx->pc = 0x32a718u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 356), (uint8_t)GPR_U32(ctx, 2));
    // 0x32a71c: 0x0  nop
    ctx->pc = 0x32a71cu;
    // NOP
label_32a720:
    // 0x32a720: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x32a720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x32a724: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x32a724u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x32a728: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x32a728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x32a72c: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x32a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x32a730: 0x24c6a5f0  addiu       $a2, $a2, -0x5A10
    ctx->pc = 0x32a730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944240));
    // 0x32a734: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x32A734u;
    SET_GPR_U32(ctx, 31, 0x32A73Cu);
    ctx->pc = 0x32A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A734u;
    // 0x32a738: 0x24e7a5d0  addiu       $a3, $a3, -0x5A30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x32A734u, 0x32A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A73Cu;
label_32a73c:
    // 0x32a73c: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x32A73Cu;
    SET_GPR_U32(ctx, 31, 0x32A744u);
    ctx->pc = 0x32A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A73Cu;
    // 0x32a740: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x32A73Cu, 0x32A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A744u;
label_32a744:
    // 0x32a744: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32A744u;
    {
        const bool branch_taken_0x32a744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a744) {
            ctx->pc = 0x32A770u;
            goto label_32a770;
        }
    }
    ctx->pc = 0x32A74Cu;
    // 0x32a74c: 0x0  nop
    ctx->pc = 0x32a74cu;
    // NOP
label_32a750:
    // 0x32a750: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32a750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32a754: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x32a754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x32a758: 0xc04c918  jal         func_132460
    ctx->pc = 0x32A758u;
    SET_GPR_U32(ctx, 31, 0x32A760u);
    ctx->pc = 0x32A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A758u;
    // 0x32a75c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x32A758u, 0x32A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A760u;
label_32a760:
    // 0x32a760: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x32A760u;
    SET_GPR_U32(ctx, 31, 0x32A768u);
    ctx->pc = 0x32A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A760u;
    // 0x32a764: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x32A760u, 0x32A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A768u;
label_32a768:
    // 0x32a768: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32A768u;
    {
        const bool branch_taken_0x32a768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a768) {
            ctx->pc = 0x32A750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a750;
        }
    }
    ctx->pc = 0x32A770u;
label_32a770:
    // 0x32a770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a774: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x32a774u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a778: 0x8f838b6c  lw          $v1, -0x7494($gp)
    ctx->pc = 0x32a778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937452)));
    // 0x32a77c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x32a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_32a780:
    // 0x32a780: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a78c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A78Cu;
        // 0x32a790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A794u;
}
