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

// Function: sub_001271A0
// Address: 0x1271a0 - 0x127238
void sub_001271A0_0x1271a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001271A0_0x1271a0");
#endif

    switch (ctx->pc) {
        case 0x1271a0u: goto label_1271a0;
        case 0x1271a4u: goto label_1271a4;
        case 0x1271a8u: goto label_1271a8;
        case 0x1271acu: goto label_1271ac;
        case 0x1271b0u: goto label_1271b0;
        case 0x1271b4u: goto label_1271b4;
        case 0x1271b8u: goto label_1271b8;
        case 0x1271bcu: goto label_1271bc;
        case 0x1271c0u: goto label_1271c0;
        case 0x1271c4u: goto label_1271c4;
        case 0x1271c8u: goto label_1271c8;
        case 0x1271ccu: goto label_1271cc;
        case 0x1271d0u: goto label_1271d0;
        case 0x1271d4u: goto label_1271d4;
        case 0x1271d8u: goto label_1271d8;
        case 0x1271dcu: goto label_1271dc;
        case 0x1271e0u: goto label_1271e0;
        case 0x1271e4u: goto label_1271e4;
        case 0x1271e8u: goto label_1271e8;
        case 0x1271ecu: goto label_1271ec;
        case 0x1271f0u: goto label_1271f0;
        case 0x1271f4u: goto label_1271f4;
        case 0x1271f8u: goto label_1271f8;
        case 0x1271fcu: goto label_1271fc;
        case 0x127200u: goto label_127200;
        case 0x127204u: goto label_127204;
        case 0x127208u: goto label_127208;
        case 0x12720cu: goto label_12720c;
        case 0x127210u: goto label_127210;
        case 0x127214u: goto label_127214;
        case 0x127218u: goto label_127218;
        case 0x12721cu: goto label_12721c;
        case 0x127220u: goto label_127220;
        case 0x127224u: goto label_127224;
        case 0x127228u: goto label_127228;
        case 0x12722cu: goto label_12722c;
        case 0x127230u: goto label_127230;
        case 0x127234u: goto label_127234;
        default: break;
    }

    ctx->pc = 0x1271a0u;

label_1271a0:
    // 0x1271a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1271a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1271a4:
    // 0x1271a4: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1271a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1271a8:
    // 0x1271a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1271a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1271ac:
    // 0x1271ac: 0x2caf0020  sltiu       $t7, $a1, 0x20
    ctx->pc = 0x1271acu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1271b0:
    // 0x1271b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1271b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1271b4:
    // 0x1271b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1271b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1271b8:
    // 0x1271b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1271b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1271bc:
    // 0x1271bc: 0x11e00018  beqz        $t7, . + 4 + (0x18 << 2)
label_1271c0:
    if (ctx->pc == 0x1271C0u) {
        ctx->pc = 0x1271C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271BCu;
        // 0x1271c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271C4u;
        goto label_1271c4;
    }
    ctx->pc = 0x1271BCu;
    {
        const bool branch_taken_0x1271bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271BCu;
        // 0x1271c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271bc) {
            ctx->pc = 0x127220u;
            goto label_127220;
        }
    }
    ctx->pc = 0x1271C4u;
label_1271c4:
    // 0x1271c4: 0x8c8e01d4  lw          $t6, 0x1D4($a0)
    ctx->pc = 0x1271c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_1271c8:
    // 0x1271c8: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
label_1271cc:
    if (ctx->pc == 0x1271CCu) {
        ctx->pc = 0x1271CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271C8u;
        // 0x1271cc: 0x107880  sll         $t7, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271D0u;
        goto label_1271d0;
    }
    ctx->pc = 0x1271C8u;
    {
        const bool branch_taken_0x1271c8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1271CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271C8u;
        // 0x1271cc: 0x107880  sll         $t7, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271c8) {
            ctx->pc = 0x1271E8u;
            goto label_1271e8;
        }
    }
    ctx->pc = 0x1271D0u;
label_1271d0:
    // 0x1271d0: 0xc049bfa  jal         func_126FE8
label_1271d4:
    if (ctx->pc == 0x1271D4u) {
        ctx->pc = 0x1271D8u;
        goto label_1271d8;
    }
    ctx->pc = 0x1271D0u;
    SET_GPR_U32(ctx, 31, 0x1271D8u);
    ctx->pc = 0x126FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126FE8u, 0x1271D0u, 0x1271D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1271D8u;
label_1271d8:
    // 0x1271d8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1271dc:
    if (ctx->pc == 0x1271DCu) {
        ctx->pc = 0x1271DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271D8u;
        // 0x1271dc: 0x240cffff  addiu       $t4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271E0u;
        goto label_1271e0;
    }
    ctx->pc = 0x1271D8u;
    {
        const bool branch_taken_0x1271d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1271DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271D8u;
        // 0x1271dc: 0x240cffff  addiu       $t4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271d8) {
            ctx->pc = 0x127220u;
            goto label_127220;
        }
    }
    ctx->pc = 0x1271E0u;
label_1271e0:
    // 0x1271e0: 0x8e2e01d4  lw          $t6, 0x1D4($s1)
    ctx->pc = 0x1271e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_1271e4:
    // 0x1271e4: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x1271e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1271e8:
    // 0x1271e8: 0x1ee6821  addu        $t5, $t7, $t6
    ctx->pc = 0x1271e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1271ec:
    // 0x1271ec: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x1271ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_1271f0:
    // 0x1271f0: 0x11c0000b  beqz        $t6, . + 4 + (0xB << 2)
label_1271f4:
    if (ctx->pc == 0x1271F4u) {
        ctx->pc = 0x1271F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271F0u;
        // 0x1271f4: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271F8u;
        goto label_1271f8;
    }
    ctx->pc = 0x1271F0u;
    {
        const bool branch_taken_0x1271f0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271F0u;
        // 0x1271f4: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271f0) {
            ctx->pc = 0x127220u;
            goto label_127220;
        }
    }
    ctx->pc = 0x1271F8u;
label_1271f8:
    // 0x1271f8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1271f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1271fc:
    // 0x1271fc: 0x11cf0008  beq         $t6, $t7, . + 4 + (0x8 << 2)
label_127200:
    if (ctx->pc == 0x127200u) {
        ctx->pc = 0x127200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271FCu;
        // 0x127200: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127204u;
        goto label_127204;
    }
    ctx->pc = 0x1271FCu;
    {
        const bool branch_taken_0x1271fc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x127200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271FCu;
        // 0x127200: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271fc) {
            ctx->pc = 0x127220u;
            goto label_127220;
        }
    }
    ctx->pc = 0x127204u;
label_127204:
    // 0x127204: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x127204u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127208:
    // 0x127208: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
label_12720c:
    if (ctx->pc == 0x12720Cu) {
        ctx->pc = 0x12720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127208u;
        // 0x12720c: 0x240c0003  addiu       $t4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127210u;
        goto label_127210;
    }
    ctx->pc = 0x127208u;
    {
        const bool branch_taken_0x127208 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127208u;
        // 0x12720c: 0x240c0003  addiu       $t4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127208) {
            ctx->pc = 0x127220u;
            goto label_127220;
        }
    }
    ctx->pc = 0x127210u;
label_127210:
    // 0x127210: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x127210u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
label_127214:
    // 0x127214: 0x1c0f809  jalr        $t6
label_127218:
    if (ctx->pc == 0x127218u) {
        ctx->pc = 0x127218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127214u;
        // 0x127218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12721Cu;
        goto label_12721c;
    }
    ctx->pc = 0x127214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 14);
        SET_GPR_U32(ctx, 31, 0x12721Cu);
        ctx->pc = 0x127218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127214u;
        // 0x127218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127214u, 0x12721Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12721Cu;
label_12721c:
    // 0x12721c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x12721cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127220:
    // 0x127220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_127224:
    // 0x127224: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x127224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_127228:
    // 0x127228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12722c:
    // 0x12722c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12722cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_127230:
    // 0x127230: 0x3e00008  jr          $ra
label_127234:
    if (ctx->pc == 0x127234u) {
        ctx->pc = 0x127234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127230u;
        // 0x127234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127238u;
        goto label_fallthrough_0x127230;
    }
    ctx->pc = 0x127230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127230u;
        // 0x127234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127230:
    ctx->pc = 0x127238u;
}
