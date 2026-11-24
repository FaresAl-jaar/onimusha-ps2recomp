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

// Function: sub_00389A60
// Address: 0x389a60 - 0x389b8c
void sub_00389A60_0x389a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389A60_0x389a60");
#endif

    switch (ctx->pc) {
        case 0x389b30u: goto label_389b30;
        case 0x389b78u: goto label_389b78;
        default: break;
    }

    ctx->pc = 0x389a60u;

    // 0x389a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x389a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x389a64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x389a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x389a68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x389a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x389a6c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x389a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x389a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x389a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x389a74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x389a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x389a78: 0x8c26cee4  lw          $a2, -0x311C($at)
    ctx->pc = 0x389a78u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEE4u));
    // 0x389a7c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x389a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x389a80: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x389A80u;
    {
        const bool branch_taken_0x389a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A80u;
        // 0x389a84: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a80) {
            ctx->pc = 0x389B78u;
            goto label_389b78;
        }
    }
    ctx->pc = 0x389A88u;
    // 0x389a88: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x389a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x389a8c: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x389a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x389a90: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x389a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x389a94: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x389A94u;
    {
        const bool branch_taken_0x389a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x389a94) {
            ctx->pc = 0x389B78u;
            goto label_389b78;
        }
    }
    ctx->pc = 0x389A9Cu;
    // 0x389a9c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x389A9Cu;
    {
        const bool branch_taken_0x389a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x389a9c) {
            ctx->pc = 0x389AD0u;
            goto label_389ad0;
        }
    }
    ctx->pc = 0x389AA4u;
    // 0x389aa4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x389AA4u;
    {
        const bool branch_taken_0x389aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x389aa4) {
            ctx->pc = 0x389AD8u;
            goto label_389ad8;
        }
    }
    ctx->pc = 0x389AACu;
    // 0x389aac: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x389aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x389ab0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x389ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x389ab4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x389ab4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x389ab8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x389AB8u;
    {
        const bool branch_taken_0x389ab8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x389ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389AB8u;
        // 0x389abc: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ab8) {
            ctx->pc = 0x389AC8u;
            goto label_389ac8;
        }
    }
    ctx->pc = 0x389AC0u;
    // 0x389ac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x389ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389ac4: 0x0  nop
    ctx->pc = 0x389ac4u;
    // NOP
label_389ac8:
    // 0x389ac8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x389AC8u;
    {
        const bool branch_taken_0x389ac8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x389ac8) {
            ctx->pc = 0x389AD8u;
            goto label_389ad8;
        }
    }
    ctx->pc = 0x389AD0u;
label_389ad0:
    // 0x389ad0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x389AD0u;
    {
        const bool branch_taken_0x389ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389ad0) {
            ctx->pc = 0x389B78u;
            goto label_389b78;
        }
    }
    ctx->pc = 0x389AD8u;
label_389ad8:
    // 0x389ad8: 0x90860640  lbu         $a2, 0x640($a0)
    ctx->pc = 0x389ad8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x389adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x389adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x389ae0: 0x14c30025  bne         $a2, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x389AE0u;
    {
        const bool branch_taken_0x389ae0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x389ae0) {
            ctx->pc = 0x389B78u;
            goto label_389b78;
        }
    }
    ctx->pc = 0x389AE8u;
    // 0x389ae8: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x389AE8u;
    {
        const bool branch_taken_0x389ae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x389ae8) {
            ctx->pc = 0x389B78u;
            goto label_389b78;
        }
    }
    ctx->pc = 0x389AF0u;
    // 0x389af0: 0x90910641  lbu         $s1, 0x641($a0)
    ctx->pc = 0x389af0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1601)));
    // 0x389af4: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x389AF4u;
    {
        const bool branch_taken_0x389af4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x389af4) {
            ctx->pc = 0x389B00u;
            goto label_389b00;
        }
    }
    ctx->pc = 0x389AFCu;
    // 0x389afc: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x389afcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_389b00:
    // 0x389b00: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x389b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x389b04: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x389b04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x389b08: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x389b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x389b0c: 0x2463c6d3  addiu       $v1, $v1, -0x392D
    ctx->pc = 0x389b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952659));
    // 0x389b10: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x389b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x389b14: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x389b14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x389b18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x389B18u;
    {
        const bool branch_taken_0x389b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x389B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B18u;
        // 0x389b1c: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b18) {
            ctx->pc = 0x389B30u;
            goto label_389b30;
        }
    }
    ctx->pc = 0x389B20u;
    // 0x389b20: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x389b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x389b24: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x389b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x389b28: 0xc04c68c  jal         func_131A30
    ctx->pc = 0x389B28u;
    SET_GPR_U32(ctx, 31, 0x389B30u);
    ctx->pc = 0x389B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389B28u;
    // 0x389b2c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A30u, 0x389B28u, 0x389B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389B30u;
label_389b30:
    // 0x389b30: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x389b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x389b34: 0x2463c6d2  addiu       $v1, $v1, -0x392E
    ctx->pc = 0x389b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952658));
    // 0x389b38: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x389b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x389b3c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x389b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x389b40: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x389B40u;
    {
        const bool branch_taken_0x389b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x389B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B40u;
        // 0x389b44: 0x306800ff  andi        $t0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b40) {
            ctx->pc = 0x389B78u;
            goto label_389b78;
        }
    }
    ctx->pc = 0x389B48u;
    // 0x389b48: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x389b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x389b4c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x389b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x389b50: 0x2442c6d1  addiu       $v0, $v0, -0x392F
    ctx->pc = 0x389b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952657));
    // 0x389b54: 0x2463c6d0  addiu       $v1, $v1, -0x3930
    ctx->pc = 0x389b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952656));
    // 0x389b58: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x389b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x389b5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x389b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x389b60: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x389b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x389b64: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x389b64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x389b68: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x389b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x389b6c: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x389b6cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x389b70: 0xc04c684  jal         func_131A10
    ctx->pc = 0x389B70u;
    SET_GPR_U32(ctx, 31, 0x389B78u);
    ctx->pc = 0x389B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389B70u;
    // 0x389b74: 0x24845ab0  addiu       $a0, $a0, 0x5AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A10u, 0x389B70u, 0x389B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389B78u;
label_389b78:
    // 0x389b78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x389b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x389b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x389b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389b84: 0x3e00008  jr          $ra
    ctx->pc = 0x389B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B84u;
        // 0x389b88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389B8Cu;
}
