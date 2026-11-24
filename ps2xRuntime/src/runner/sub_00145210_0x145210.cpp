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

// Function: sub_00145210
// Address: 0x145210 - 0x1452b4
void sub_00145210_0x145210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145210_0x145210");
#endif

    switch (ctx->pc) {
        case 0x145250u: goto label_145250;
        case 0x145278u: goto label_145278;
        default: break;
    }

    ctx->pc = 0x145210u;

    // 0x145210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x145210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x145214: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x145214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x145218: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x145218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14521c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x145220: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x145220u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145224: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x145224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x145228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14522c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145230: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x145230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145238: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x145238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14523c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14523cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x145240: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x145240u;
    {
        const bool branch_taken_0x145240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x145244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145240u;
        // 0x145244: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145240) {
            ctx->pc = 0x145290u;
            goto label_145290;
        }
    }
    ctx->pc = 0x145248u;
    // 0x145248: 0x30f300ff  andi        $s3, $a3, 0xFF
    ctx->pc = 0x145248u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14524c: 0x0  nop
    ctx->pc = 0x14524cu;
    // NOP
label_145250:
    // 0x145250: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x145250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x145254: 0x1473000a  bne         $v1, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x145254u;
    {
        const bool branch_taken_0x145254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x145258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145254u;
        // 0x145258: 0x8c940000  lw          $s4, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145254) {
            ctx->pc = 0x145280u;
            goto label_145280;
        }
    }
    ctx->pc = 0x14525Cu;
    // 0x14525c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14525cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145264: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145268: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x145268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14526c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x14526cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145270: 0xc0514f4  jal         func_1453D0
    ctx->pc = 0x145270u;
    SET_GPR_U32(ctx, 31, 0x145278u);
    ctx->pc = 0x145274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145270u;
    // 0x145274: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1453D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1453D0u, 0x145270u, 0x145278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145278u;
label_145278:
    // 0x145278: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x145278u;
    {
        const bool branch_taken_0x145278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145278) {
            ctx->pc = 0x145288u;
            goto label_145288;
        }
    }
    ctx->pc = 0x145280u;
label_145280:
    // 0x145280: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x145280u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145284: 0x0  nop
    ctx->pc = 0x145284u;
    // NOP
label_145288:
    // 0x145288: 0x1680fff1  bnez        $s4, . + 4 + (-0xF << 2)
    ctx->pc = 0x145288u;
    {
        const bool branch_taken_0x145288 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x14528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145288u;
        // 0x14528c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145288) {
            ctx->pc = 0x145250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145250;
        }
    }
    ctx->pc = 0x145290u;
label_145290:
    // 0x145290: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x145290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x145294: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x145294u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145298: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x145298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14529c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14529cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1452a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1452a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1452a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1452a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1452a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1452a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1452ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1452ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1452B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452ACu;
        // 0x1452b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1452ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1452B4u;
}
