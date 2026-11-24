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

// Function: sub_003F64E0
// Address: 0x3f64e0 - 0x3f65e8
void sub_003F64E0_0x3f64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F64E0_0x3f64e0");
#endif

    switch (ctx->pc) {
        case 0x3f6534u: goto label_3f6534;
        case 0x3f654cu: goto label_3f654c;
        case 0x3f6564u: goto label_3f6564;
        case 0x3f6574u: goto label_3f6574;
        case 0x3f6584u: goto label_3f6584;
        case 0x3f65b0u: goto label_3f65b0;
        case 0x3f65c4u: goto label_3f65c4;
        case 0x3f65d8u: goto label_3f65d8;
        default: break;
    }

    ctx->pc = 0x3f64e0u;

    // 0x3f64e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f64e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f64e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f64e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f64e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f64e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f64ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f64ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f64f0: 0x90850021  lbu         $a1, 0x21($a0)
    ctx->pc = 0x3f64f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x3f64f4: 0x10a30036  beq         $a1, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3F64F4u;
    {
        const bool branch_taken_0x3f64f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F64F4u;
        // 0x3f64f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f64f4) {
            ctx->pc = 0x3F65D0u;
            goto label_3f65d0;
        }
    }
    ctx->pc = 0x3F64FCu;
    // 0x3f64fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f64fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f6500: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3F6500u;
    {
        const bool branch_taken_0x3f6500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f6500) {
            ctx->pc = 0x3F6558u;
            goto label_3f6558;
        }
    }
    ctx->pc = 0x3F6508u;
    // 0x3f6508: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6508u;
    {
        const bool branch_taken_0x3f6508 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6508) {
            ctx->pc = 0x3F6518u;
            goto label_3f6518;
        }
    }
    ctx->pc = 0x3F6510u;
    // 0x3f6510: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3F6510u;
    {
        const bool branch_taken_0x3f6510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6510) {
            ctx->pc = 0x3F65D8u;
            goto label_3f65d8;
        }
    }
    ctx->pc = 0x3F6518u;
label_3f6518:
    // 0x3f6518: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3f6518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f651c: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x3f651cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f6520: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3f6520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3f6524: 0x9206000b  lbu         $a2, 0xB($s0)
    ctx->pc = 0x3f6524u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3f6528: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x3f6528u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f652c: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x3F652Cu;
    SET_GPR_U32(ctx, 31, 0x3F6534u);
    ctx->pc = 0x3F6530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F652Cu;
    // 0x3f6530: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x3F652Cu, 0x3F6534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6534u;
label_3f6534:
    // 0x3f6534: 0x3c030103  lui         $v1, 0x103
    ctx->pc = 0x3f6534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)259 << 16));
    // 0x3f6538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f6538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f653c: 0x34650055  ori         $a1, $v1, 0x55
    ctx->pc = 0x3f653cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)85);
    // 0x3f6540: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3f6540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6544: 0xc0dc810  jal         func_372040
    ctx->pc = 0x3F6544u;
    SET_GPR_U32(ctx, 31, 0x3F654Cu);
    ctx->pc = 0x3F6548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6544u;
    // 0x3f6548: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x3F6544u, 0x3F654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F654Cu;
label_3f654c:
    // 0x3f654c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3F654Cu;
    {
        const bool branch_taken_0x3f654c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f654c) {
            ctx->pc = 0x3F65D8u;
            goto label_3f65d8;
        }
    }
    ctx->pc = 0x3F6554u;
    // 0x3f6554: 0x0  nop
    ctx->pc = 0x3f6554u;
    // NOP
label_3f6558:
    // 0x3f6558: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3f6558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3f655c: 0xc095150  jal         func_254540
    ctx->pc = 0x3F655Cu;
    SET_GPR_U32(ctx, 31, 0x3F6564u);
    ctx->pc = 0x3F6560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F655Cu;
    // 0x3f6560: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3F655Cu, 0x3F6564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6564u;
label_3f6564:
    // 0x3f6564: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3F6564u;
    {
        const bool branch_taken_0x3f6564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6564u;
        // 0x3f6568: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6564) {
            ctx->pc = 0x3F65D8u;
            goto label_3f65d8;
        }
    }
    ctx->pc = 0x3F656Cu;
    // 0x3f656c: 0xc095154  jal         func_254550
    ctx->pc = 0x3F656Cu;
    SET_GPR_U32(ctx, 31, 0x3F6574u);
    ctx->pc = 0x3F6570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F656Cu;
    // 0x3f6570: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3F656Cu, 0x3F6574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6574u;
label_3f6574:
    // 0x3f6574: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6574u;
    {
        const bool branch_taken_0x3f6574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6574u;
        // 0x3f6578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6574) {
            ctx->pc = 0x3F6590u;
            goto label_3f6590;
        }
    }
    ctx->pc = 0x3F657Cu;
    // 0x3f657c: 0xc0fd97c  jal         func_3F65F0
    ctx->pc = 0x3F657Cu;
    SET_GPR_U32(ctx, 31, 0x3F6584u);
    ctx->pc = 0x3F65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F65F0u, 0x3F657Cu, 0x3F6584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6584u;
label_3f6584:
    // 0x3f6584: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3F6584u;
    {
        const bool branch_taken_0x3f6584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6584) {
            ctx->pc = 0x3F65D8u;
            goto label_3f65d8;
        }
    }
    ctx->pc = 0x3F658Cu;
    // 0x3f658c: 0x0  nop
    ctx->pc = 0x3f658cu;
    // NOP
label_3f6590:
    // 0x3f6590: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x3f6590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x3f6594: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3f6594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3f6598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f6598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f659c: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x3f659cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f65a0: 0x9206000b  lbu         $a2, 0xB($s0)
    ctx->pc = 0x3f65a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3f65a4: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x3f65a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f65a8: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x3F65A8u;
    SET_GPR_U32(ctx, 31, 0x3F65B0u);
    ctx->pc = 0x3F65ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F65A8u;
    // 0x3f65ac: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x3F65A8u, 0x3F65B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F65B0u;
label_3f65b0:
    // 0x3f65b0: 0x3c030103  lui         $v1, 0x103
    ctx->pc = 0x3f65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)259 << 16));
    // 0x3f65b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f65b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f65b8: 0x34650056  ori         $a1, $v1, 0x56
    ctx->pc = 0x3f65b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)86);
    // 0x3f65bc: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x3F65BCu;
    SET_GPR_U32(ctx, 31, 0x3F65C4u);
    ctx->pc = 0x3F65C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F65BCu;
    // 0x3f65c0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x3F65BCu, 0x3F65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F65C4u;
label_3f65c4:
    // 0x3f65c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F65C4u;
    {
        const bool branch_taken_0x3f65c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f65c4) {
            ctx->pc = 0x3F65D8u;
            goto label_3f65d8;
        }
    }
    ctx->pc = 0x3F65CCu;
    // 0x3f65cc: 0x0  nop
    ctx->pc = 0x3f65ccu;
    // NOP
label_3f65d0:
    // 0x3f65d0: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x3F65D0u;
    SET_GPR_U32(ctx, 31, 0x3F65D8u);
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x3F65D0u, 0x3F65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F65D8u;
label_3f65d8:
    // 0x3f65d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f65d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f65dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f65dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f65e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F65E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F65E0u;
        // 0x3f65e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F65E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F65E8u;
}
