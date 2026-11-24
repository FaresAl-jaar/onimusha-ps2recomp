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

// Function: sub_003DE230
// Address: 0x3de230 - 0x3de2e4
void sub_003DE230_0x3de230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE230_0x3de230");
#endif

    switch (ctx->pc) {
        case 0x3de258u: goto label_3de258;
        case 0x3de28cu: goto label_3de28c;
        default: break;
    }

    ctx->pc = 0x3de230u;

    // 0x3de230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3de230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3de234: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3de234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3de238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3de238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3de23c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3de23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3de240: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3de240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3de244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3de248: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3de248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3de24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3de250: 0x27908060  addiu       $s0, $gp, -0x7FA0
    ctx->pc = 0x3de250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3de254: 0x0  nop
    ctx->pc = 0x3de254u;
    // NOP
label_3de258:
    // 0x3de258: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3de258u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3de25c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DE25Cu;
    {
        const bool branch_taken_0x3de25c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de25c) {
            ctx->pc = 0x3DE2B0u;
            goto label_3de2b0;
        }
    }
    ctx->pc = 0x3DE264u;
    // 0x3de264: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3de264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de268: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3de268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3de26c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DE26Cu;
    {
        const bool branch_taken_0x3de26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de26c) {
            ctx->pc = 0x3DE2B0u;
            goto label_3de2b0;
        }
    }
    ctx->pc = 0x3DE274u;
    // 0x3de274: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x3de274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x3de278: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3de278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3de27c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DE27Cu;
    {
        const bool branch_taken_0x3de27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE27Cu;
        // 0x3de280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de27c) {
            ctx->pc = 0x3DE2B0u;
            goto label_3de2b0;
        }
    }
    ctx->pc = 0x3DE284u;
    // 0x3de284: 0xc096988  jal         func_25A620
    ctx->pc = 0x3DE284u;
    SET_GPR_U32(ctx, 31, 0x3DE28Cu);
    ctx->pc = 0x3DE288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE284u;
    // 0x3de288: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3DE284u, 0x3DE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE28Cu;
label_3de28c:
    // 0x3de28c: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x3de28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x3de290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3de290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3de294: 0x0  nop
    ctx->pc = 0x3de294u;
    // NOP
    // 0x3de298: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3de298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3de29c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE29Cu;
    {
        const bool branch_taken_0x3de29c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE29Cu;
        // 0x3de2a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de29c) {
            ctx->pc = 0x3DE2B0u;
            goto label_3de2b0;
        }
    }
    ctx->pc = 0x3DE2A4u;
    // 0x3de2a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE2A4u;
    {
        const bool branch_taken_0x3de2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de2a4) {
            ctx->pc = 0x3DE2C8u;
            goto label_3de2c8;
        }
    }
    ctx->pc = 0x3DE2ACu;
    // 0x3de2ac: 0x0  nop
    ctx->pc = 0x3de2acu;
    // NOP
label_3de2b0:
    // 0x3de2b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3de2b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3de2b4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x3de2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3de2b8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3DE2B8u;
    {
        const bool branch_taken_0x3de2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2B8u;
        // 0x3de2bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de2b8) {
            ctx->pc = 0x3DE258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de258;
        }
    }
    ctx->pc = 0x3DE2C0u;
    // 0x3de2c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de2c4: 0x0  nop
    ctx->pc = 0x3de2c4u;
    // NOP
label_3de2c8:
    // 0x3de2c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3de2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3de2cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3de2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3de2d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3de2d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3de2d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3de2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3de2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2DCu;
        // 0x3de2e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE2E4u;
}
