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

// Function: sub_003A0980
// Address: 0x3a0980 - 0x3a0a14
void sub_003A0980_0x3a0980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0980_0x3a0980");
#endif

    switch (ctx->pc) {
        case 0x3a09bcu: goto label_3a09bc;
        case 0x3a09e4u: goto label_3a09e4;
        default: break;
    }

    ctx->pc = 0x3a0980u;

    // 0x3a0980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a0984: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a0984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a0988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a098c: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x3a098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
    // 0x3a0990: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a0990u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65CF10u));
    // 0x3a0994: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3a0994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a0998: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x3a0998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a099c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a09a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a09a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a09a4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a09a8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3a09a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3a09ac: 0x2442cf20  addiu       $v0, $v0, -0x30E0
    ctx->pc = 0x3a09acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x3a09b0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3a09b0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65CF20u));
    // 0x3a09b4: 0xc0a94dc  jal         func_2A5370
    ctx->pc = 0x3A09B4u;
    SET_GPR_U32(ctx, 31, 0x3A09BCu);
    ctx->pc = 0x3A09B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A09B4u;
    // 0x3a09b8: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5370u, 0x3A09B4u, 0x3A09BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A09BCu;
label_3a09bc:
    // 0x3a09bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a09bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a09c0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3a09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3a09c4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3a09c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a09c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a09c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a09cc: 0x83858a5c  lb          $a1, -0x75A4($gp)
    ctx->pc = 0x3a09ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x3a09d0: 0x93848a54  lbu         $a0, -0x75AC($gp)
    ctx->pc = 0x3a09d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
    // 0x3a09d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a09d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a09d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a09d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a09dc: 0xc0d2604  jal         func_349810
    ctx->pc = 0x3A09DCu;
    SET_GPR_U32(ctx, 31, 0x3A09E4u);
    ctx->pc = 0x3A09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A09DCu;
    // 0x3a09e0: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349810u, 0x3A09DCu, 0x3A09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A09E4u;
label_3a09e4:
    // 0x3a09e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A09E4u;
    {
        const bool branch_taken_0x3a09e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A09E4u;
        // 0x3a09e8: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a09e4) {
            ctx->pc = 0x3A0A08u;
            goto label_3a0a08;
        }
    }
    ctx->pc = 0x3A09ECu;
    // 0x3a09ec: 0x9043005c  lbu         $v1, 0x5C($v0)
    ctx->pc = 0x3a09ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x3a09f0: 0x90246ac8  lbu         $a0, 0x6AC8($at)
    ctx->pc = 0x3a09f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27336)));
    // 0x3a09f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a09f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a09f8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3a09f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a09fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A09FCu;
    {
        const bool branch_taken_0x3a09fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a09fc) {
            ctx->pc = 0x3A0A08u;
            goto label_3a0a08;
        }
    }
    ctx->pc = 0x3A0A04u;
    // 0x3a0a04: 0xa044005c  sb          $a0, 0x5C($v0)
    ctx->pc = 0x3a0a04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 92), (uint8_t)GPR_U32(ctx, 4));
label_3a0a08:
    // 0x3a0a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A0Cu;
        // 0x3a0a10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0A14u;
}
