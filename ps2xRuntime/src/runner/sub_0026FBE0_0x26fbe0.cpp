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

// Function: sub_0026FBE0
// Address: 0x26fbe0 - 0x26fc94
void sub_0026FBE0_0x26fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FBE0_0x26fbe0");
#endif

    switch (ctx->pc) {
        case 0x26fc10u: goto label_26fc10;
        default: break;
    }

    ctx->pc = 0x26fbe0u;

    // 0x26fbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26fbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26fbe4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26fbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26fbe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fbec: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x26fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x26fbf0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x26fbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x26fbf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FBF4u;
    {
        const bool branch_taken_0x26fbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBF4u;
        // 0x26fbf8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbf4) {
            ctx->pc = 0x26FC08u;
            goto label_26fc08;
        }
    }
    ctx->pc = 0x26FBFCu;
    // 0x26fbfc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26FBFCu;
    {
        const bool branch_taken_0x26fbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fbfc) {
            ctx->pc = 0x26FC88u;
            goto label_26fc88;
        }
    }
    ctx->pc = 0x26FC04u;
    // 0x26fc04: 0x0  nop
    ctx->pc = 0x26fc04u;
    // NOP
label_26fc08:
    // 0x26fc08: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x26FC08u;
    SET_GPR_U32(ctx, 31, 0x26FC10u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x26FC08u, 0x26FC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC10u;
label_26fc10:
    // 0x26fc10: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x26fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x26fc14: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26fc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fc18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC18u;
    {
        const bool branch_taken_0x26fc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fc18) {
            ctx->pc = 0x26FC28u;
            goto label_26fc28;
        }
    }
    ctx->pc = 0x26FC20u;
    // 0x26fc20: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26FC20u;
    {
        const bool branch_taken_0x26fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC20u;
        // 0x26fc24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc20) {
            ctx->pc = 0x26FC88u;
            goto label_26fc88;
        }
    }
    ctx->pc = 0x26FC28u;
label_26fc28:
    // 0x26fc28: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26fc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26fc2c: 0x80236c10  lb          $v1, 0x6C10($at)
    ctx->pc = 0x26fc2cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x8D6C10u));
    // 0x26fc30: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x26fc30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26fc34: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x26FC34u;
    {
        const bool branch_taken_0x26fc34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc34) {
            ctx->pc = 0x26FC80u;
            goto label_26fc80;
        }
    }
    ctx->pc = 0x26FC3Cu;
    // 0x26fc3c: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26FC3Cu;
    {
        const bool branch_taken_0x26fc3c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x26FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC3Cu;
        // 0x26fc40: 0x3c01006b  lui         $at, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc3c) {
            ctx->pc = 0x26FC80u;
            goto label_26fc80;
        }
    }
    ctx->pc = 0x26FC44u;
    // 0x26fc44: 0x8c220e7c  lw          $v0, 0xE7C($at)
    ctx->pc = 0x26fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3708)));
    // 0x26fc48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26fc4c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26fc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26fc50: 0xac220e7c  sw          $v0, 0xE7C($at)
    ctx->pc = 0x26fc50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E7Cu, _value); } while (0);
    // 0x26fc54: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26fc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26fc58: 0x8c220e7c  lw          $v0, 0xE7C($at)
    ctx->pc = 0x26fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B0E7Cu));
    // 0x26fc5c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x26fc5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x26fc60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FC60u;
    {
        const bool branch_taken_0x26fc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC60u;
        // 0x26fc64: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc60) {
            ctx->pc = 0x26FC80u;
            goto label_26fc80;
        }
    }
    ctx->pc = 0x26FC68u;
    // 0x26fc68: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26fc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26fc6c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x26fc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26fc70: 0xac200e7c  sw          $zero, 0xE7C($at)
    ctx->pc = 0x26fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3708), GPR_U32(ctx, 0));
    // 0x26fc74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26FC74u;
    {
        const bool branch_taken_0x26fc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC74u;
        // 0x26fc78: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc74) {
            ctx->pc = 0x26FC88u;
            goto label_26fc88;
        }
    }
    ctx->pc = 0x26FC7Cu;
    // 0x26fc7c: 0x0  nop
    ctx->pc = 0x26fc7cu;
    // NOP
label_26fc80:
    // 0x26fc80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26fc84: 0x0  nop
    ctx->pc = 0x26fc84u;
    // NOP
label_26fc88:
    // 0x26fc88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x26FC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC8Cu;
        // 0x26fc90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FC94u;
}
