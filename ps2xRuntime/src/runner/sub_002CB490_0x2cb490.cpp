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

// Function: sub_002CB490
// Address: 0x2cb490 - 0x2cb538
void sub_002CB490_0x2cb490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB490_0x2cb490");
#endif

    switch (ctx->pc) {
        case 0x2cb500u: goto label_2cb500;
        default: break;
    }

    ctx->pc = 0x2cb490u;

    // 0x2cb490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb494: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb49c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cb4a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb4a4: 0x9022657f  lbu         $v0, 0x657F($at)
    ctx->pc = 0x2cb4a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D657Fu));
    // 0x2cb4a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB4A8u;
    {
        const bool branch_taken_0x2cb4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4A8u;
        // 0x2cb4ac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4a8) {
            ctx->pc = 0x2CB4B8u;
            goto label_2cb4b8;
        }
    }
    ctx->pc = 0x2CB4B0u;
    // 0x2cb4b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CB4B0u;
    {
        const bool branch_taken_0x2cb4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4B0u;
        // 0x2cb4b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4b0) {
            ctx->pc = 0x2CB4D8u;
            goto label_2cb4d8;
        }
    }
    ctx->pc = 0x2CB4B8u;
label_2cb4b8:
    // 0x2cb4b8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2cb4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cb4bc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb4c0: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cb4c4: 0xa023657f  sb          $v1, 0x657F($at)
    ctx->pc = 0x2cb4c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D657Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D657Fu, _value); } while (0);
    // 0x2cb4c8: 0x24426480  addiu       $v0, $v0, 0x6480
    ctx->pc = 0x2cb4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25728));
    // 0x2cb4cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cb4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cb4d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb4d4: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2cb4d4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb4d8:
    // 0x2cb4d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2cb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2cb4dc: 0x3c07008d  lui         $a3, 0x8D
    ctx->pc = 0x2cb4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)141 << 16));
    // 0x2cb4e0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2cb4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cb4e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2cb4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb4e8: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cb4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cb4ec: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x2cb4ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cb4f0: 0x24426590  addiu       $v0, $v0, 0x6590
    ctx->pc = 0x2cb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26000));
    // 0x2cb4f4: 0x24e76ab0  addiu       $a3, $a3, 0x6AB0
    ctx->pc = 0x2cb4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27312));
    // 0x2cb4f8: 0xc0b2ca4  jal         func_2CB290
    ctx->pc = 0x2CB4F8u;
    SET_GPR_U32(ctx, 31, 0x2CB500u);
    ctx->pc = 0x2CB4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4F8u;
    // 0x2cb4fc: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB290u, 0x2CB4F8u, 0x2CB500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB500u;
label_2cb500:
    // 0x2cb500: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2cb500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2cb504: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cb504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cb508: 0x24636598  addiu       $v1, $v1, 0x6598
    ctx->pc = 0x2cb508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26008));
    // 0x2cb50c: 0x2442659a  addiu       $v0, $v0, 0x659A
    ctx->pc = 0x2cb50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26010));
    // 0x2cb510: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2cb510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2cb514: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2cb514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2cb518: 0xa4900000  sh          $s0, 0x0($a0)
    ctx->pc = 0x2cb518u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x2cb51c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2cb51cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cb520: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2cb520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cb524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb52c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb530: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB530u;
        // 0x2cb534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB538u;
}
