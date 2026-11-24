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

// Function: sub_0025E930
// Address: 0x25e930 - 0x25e998
void sub_0025E930_0x25e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E930_0x25e930");
#endif

    switch (ctx->pc) {
        case 0x25e958u: goto label_25e958;
        case 0x25e970u: goto label_25e970;
        case 0x25e978u: goto label_25e978;
        case 0x25e988u: goto label_25e988;
        default: break;
    }

    ctx->pc = 0x25e930u;

    // 0x25e930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25e934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25e938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e93c: 0x78820040  lq          $v0, 0x40($a0)
    ctx->pc = 0x25e93cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x25e940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25e940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e944: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x25e944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25e948: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x25e948u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x25e94c: 0x8c8400b0  lw          $a0, 0xB0($a0)
    ctx->pc = 0x25e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x25e950: 0xc07ba50  jal         func_1EE940
    ctx->pc = 0x25E950u;
    SET_GPR_U32(ctx, 31, 0x25E958u);
    ctx->pc = 0x25E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E950u;
    // 0x25e954: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE940u, 0x25E950u, 0x25E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E958u;
label_25e958:
    // 0x25e958: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x25e958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25e95c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25e95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25e960: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E960u;
    {
        const bool branch_taken_0x25e960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e960) {
            ctx->pc = 0x25E970u;
            goto label_25e970;
        }
    }
    ctx->pc = 0x25E968u;
    // 0x25e968: 0xc07bc24  jal         func_1EF090
    ctx->pc = 0x25E968u;
    SET_GPR_U32(ctx, 31, 0x25E970u);
    ctx->pc = 0x25E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E968u;
    // 0x25e96c: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF090u, 0x25E968u, 0x25E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E970u;
label_25e970:
    // 0x25e970: 0xc07bc10  jal         func_1EF040
    ctx->pc = 0x25E970u;
    SET_GPR_U32(ctx, 31, 0x25E978u);
    ctx->pc = 0x25E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E970u;
    // 0x25e974: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF040u, 0x25E970u, 0x25E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E978u;
label_25e978:
    // 0x25e978: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E978u;
    {
        const bool branch_taken_0x25e978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E978u;
        // 0x25e97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e978) {
            ctx->pc = 0x25E988u;
            goto label_25e988;
        }
    }
    ctx->pc = 0x25E980u;
    // 0x25e980: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x25E980u;
    SET_GPR_U32(ctx, 31, 0x25E988u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x25E980u, 0x25E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E988u;
label_25e988:
    // 0x25e988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25e988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e990: 0x3e00008  jr          $ra
    ctx->pc = 0x25E990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E990u;
        // 0x25e994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E998u;
}
