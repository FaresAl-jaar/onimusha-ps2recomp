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

// Function: sub_00263E40
// Address: 0x263e40 - 0x263ec4
void sub_00263E40_0x263e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263E40_0x263e40");
#endif

    switch (ctx->pc) {
        case 0x263e90u: goto label_263e90;
        default: break;
    }

    ctx->pc = 0x263e40u;

    // 0x263e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263e4c: 0x94832ad0  lhu         $v1, 0x2AD0($a0)
    ctx->pc = 0x263e4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10960)));
    // 0x263e50: 0xa7838854  sh          $v1, -0x77AC($gp)
    ctx->pc = 0x263e50u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936660), (uint16_t)GPR_U32(ctx, 3));
    // 0x263e54: 0x8c8306c8  lw          $v1, 0x6C8($a0)
    ctx->pc = 0x263e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x263e58: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x263e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x263e5c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x263e5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x263e60: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x263E60u;
    {
        const bool branch_taken_0x263e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x263E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E60u;
        // 0x263e64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e60) {
            ctx->pc = 0x263E74u;
            goto label_263e74;
        }
    }
    ctx->pc = 0x263E68u;
    // 0x263e68: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x263e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x263e6c: 0x386300fb  xori        $v1, $v1, 0xFB
    ctx->pc = 0x263e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)251);
    // 0x263e70: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x263e70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_263e74:
    // 0x263e74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x263E74u;
    {
        const bool branch_taken_0x263e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263e74) {
            ctx->pc = 0x263E98u;
            goto label_263e98;
        }
    }
    ctx->pc = 0x263E7Cu;
    // 0x263e7c: 0x92022ad8  lbu         $v0, 0x2AD8($s0)
    ctx->pc = 0x263e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10968)));
    // 0x263e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x263e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x263e88: 0xc0ae51c  jal         func_2B9470
    ctx->pc = 0x263E88u;
    SET_GPR_U32(ctx, 31, 0x263E90u);
    ctx->pc = 0x263E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263E88u;
    // 0x263e8c: 0xa7828848  sh          $v0, -0x77B8($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936648), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9470u, 0x263E88u, 0x263E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E90u;
label_263e90:
    // 0x263e90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x263E90u;
    {
        const bool branch_taken_0x263e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263e90) {
            ctx->pc = 0x263EA0u;
            goto label_263ea0;
        }
    }
    ctx->pc = 0x263E98u;
label_263e98:
    // 0x263e98: 0xa7808848  sh          $zero, -0x77B8($gp)
    ctx->pc = 0x263e98u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936648), (uint16_t)GPR_U32(ctx, 0));
    // 0x263e9c: 0x0  nop
    ctx->pc = 0x263e9cu;
    // NOP
label_263ea0:
    // 0x263ea0: 0x960329de  lhu         $v1, 0x29DE($s0)
    ctx->pc = 0x263ea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x263ea4: 0x30630880  andi        $v1, $v1, 0x880
    ctx->pc = 0x263ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2176);
    // 0x263ea8: 0xa783884c  sh          $v1, -0x77B4($gp)
    ctx->pc = 0x263ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936652), (uint16_t)GPR_U32(ctx, 3));
    // 0x263eac: 0x960329f2  lhu         $v1, 0x29F2($s0)
    ctx->pc = 0x263eacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10738)));
    // 0x263eb0: 0xa7838850  sh          $v1, -0x77B0($gp)
    ctx->pc = 0x263eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936656), (uint16_t)GPR_U32(ctx, 3));
    // 0x263eb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x263EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EBCu;
        // 0x263ec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263EC4u;
}
