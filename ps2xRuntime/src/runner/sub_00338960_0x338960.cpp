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

// Function: sub_00338960
// Address: 0x338960 - 0x338a10
void sub_00338960_0x338960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338960_0x338960");
#endif

    switch (ctx->pc) {
        case 0x3389d0u: goto label_3389d0;
        default: break;
    }

    ctx->pc = 0x338960u;

    // 0x338960: 0x3c09004f  lui         $t1, 0x4F
    ctx->pc = 0x338960u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)79 << 16));
    // 0x338964: 0x5563c  dsll32      $t2, $a1, 24
    ctx->pc = 0x338964u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) << (32 + 24));
    // 0x338968: 0x2529a320  addiu       $t1, $t1, -0x5CE0
    ctx->pc = 0x338968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943520));
    // 0x33896c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33896cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x338970: 0x79270000  lq          $a3, 0x0($t1)
    ctx->pc = 0x338970u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x338974: 0x27a80000  addiu       $t0, $sp, 0x0
    ctx->pc = 0x338974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x338978: 0x79260010  lq          $a2, 0x10($t1)
    ctx->pc = 0x338978u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x33897c: 0xa563f  dsra32      $t2, $t2, 24
    ctx->pc = 0x33897cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
    // 0x338980: 0x79250020  lq          $a1, 0x20($t1)
    ctx->pc = 0x338980u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x338984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x338984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338988: 0x79230030  lq          $v1, 0x30($t1)
    ctx->pc = 0x338988u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x33898c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x33898cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x338990: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x338990u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
    // 0x338994: 0x7d050020  sq          $a1, 0x20($t0)
    ctx->pc = 0x338994u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 5));
    // 0x338998: 0x7d030030  sq          $v1, 0x30($t0)
    ctx->pc = 0x338998u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 3));
    // 0x33899c: 0xc5200040  lwc1        $f0, 0x40($t1)
    ctx->pc = 0x33899cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3389a0: 0x19400019  blez        $t2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3389A0u;
    {
        const bool branch_taken_0x3389a0 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x3389A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3389A0u;
        // 0x3389a4: 0xe5000040  swc1        $f0, 0x40($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3389a0) {
            ctx->pc = 0x338A08u;
            goto label_338a08;
        }
    }
    ctx->pc = 0x3389A8u;
    // 0x3389a8: 0x29410012  slti        $at, $t2, 0x12
    ctx->pc = 0x3389a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x3389ac: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x3389ACu;
    {
        const bool branch_taken_0x3389ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3389B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3389ACu;
        // 0x3389b0: 0x2543ffff  addiu       $v1, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3389ac) {
            ctx->pc = 0x338A08u;
            goto label_338a08;
        }
    }
    ctx->pc = 0x3389B4u;
    // 0x3389b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3389b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3389b8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3389b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3389bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3389bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3389c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3389c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3389c4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3389c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3389c8: 0x24660000  addiu       $a2, $v1, 0x0
    ctx->pc = 0x3389c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x3389cc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3389ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3389d0:
    // 0x3389d0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3389d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3389d4: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3389D4u;
    {
        const bool branch_taken_0x3389d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3389d4) {
            ctx->pc = 0x3389F8u;
            goto label_3389f8;
        }
    }
    ctx->pc = 0x3389DCu;
    // 0x3389dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3389dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3389e0: 0x90630ee6  lbu         $v1, 0xEE6($v1)
    ctx->pc = 0x3389e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3814)));
    // 0x3389e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3389E4u;
    {
        const bool branch_taken_0x3389e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3389e4) {
            ctx->pc = 0x3389F8u;
            goto label_3389f8;
        }
    }
    ctx->pc = 0x3389ECu;
    // 0x3389ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3389ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3389f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3389f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3389f4: 0x0  nop
    ctx->pc = 0x3389f4u;
    // NOP
label_3389f8:
    // 0x3389f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3389f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3389fc: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x3389fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x338a00: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x338A00u;
    {
        const bool branch_taken_0x338a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x338A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A00u;
        // 0x338a04: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338a00) {
            ctx->pc = 0x3389D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3389d0;
        }
    }
    ctx->pc = 0x338A08u;
label_338a08:
    // 0x338a08: 0x3e00008  jr          $ra
    ctx->pc = 0x338A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A08u;
        // 0x338a0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338A10u;
}
