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

// Function: sub_0020C070
// Address: 0x20c070 - 0x20c114
void sub_0020C070_0x20c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C070_0x20c070");
#endif

    switch (ctx->pc) {
        case 0x20c0ccu: goto label_20c0cc;
        case 0x20c0d8u: goto label_20c0d8;
        case 0x20c0f8u: goto label_20c0f8;
        default: break;
    }

    ctx->pc = 0x20c070u;

    // 0x20c070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c074: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x20c074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x20c078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c07c: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x20c07cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x20c080: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20c080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20c084: 0x24a59f98  addiu       $a1, $a1, -0x6068
    ctx->pc = 0x20c084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942616));
    // 0x20c088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c08c: 0x24c69f9c  addiu       $a2, $a2, -0x6064
    ctx->pc = 0x20c08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942620));
    // 0x20c090: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20c090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20c094: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x20c094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x20c098: 0x249286dc  addiu       $s2, $a0, -0x7924
    ctx->pc = 0x20c098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936284));
    // 0x20c09c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c0a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B9F98u));
    // 0x20c0a4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B9F9Cu));
    // 0x20c0a8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x20c0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4B86DCu));
    // 0x20c0ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20c0b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20c0b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20c0b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4B9F98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B9F98u, _value); } while (0);
    // 0x20c0b8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x20c0b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B9F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B9F9Cu, _value); } while (0);
    // 0x20c0bc: 0x56240010  bnel        $s1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20C0BCu;
    {
        const bool branch_taken_0x20c0bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x20c0bc) {
            ctx->pc = 0x20C0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C0BCu;
            // 0x20c0c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C100u;
            goto label_20c100;
        }
    }
    ctx->pc = 0x20C0C4u;
    // 0x20c0c4: 0xc081544  jal         func_205510
    ctx->pc = 0x20C0C4u;
    SET_GPR_U32(ctx, 31, 0x20C0CCu);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20C0C4u, 0x20C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0CCu;
label_20c0cc:
    // 0x20c0cc: 0x2450005c  addiu       $s0, $v0, 0x5C
    ctx->pc = 0x20c0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x20c0d0: 0xc082e38  jal         func_20B8E0
    ctx->pc = 0x20C0D0u;
    SET_GPR_U32(ctx, 31, 0x20C0D8u);
    ctx->pc = 0x20C0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0D0u;
    // 0x20c0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8E0u, 0x20C0D0u, 0x20C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0D8u;
label_20c0d8:
    // 0x20c0d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20c0d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c0dc: 0x54710008  bnel        $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C0DCu;
    {
        const bool branch_taken_0x20c0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x20c0dc) {
            ctx->pc = 0x20C0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C0DCu;
            // 0x20c0e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C100u;
            goto label_20c100;
        }
    }
    ctx->pc = 0x20C0E4u;
    // 0x20c0e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20c0e8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C0E8u;
    {
        const bool branch_taken_0x20c0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20c0e8) {
            ctx->pc = 0x20C0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C0E8u;
            // 0x20c0ec: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C0FCu;
            goto label_20c0fc;
        }
    }
    ctx->pc = 0x20C0F0u;
    // 0x20c0f0: 0xc087074  jal         func_21C1D0
    ctx->pc = 0x20C0F0u;
    SET_GPR_U32(ctx, 31, 0x20C0F8u);
    ctx->pc = 0x21C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C1D0u, 0x20C0F0u, 0x20C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0F8u;
label_20c0f8:
    // 0x20c0f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x20c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_20c0fc:
    // 0x20c0fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c100:
    // 0x20c100: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c104: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20c104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c108: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20c108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20c10c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C10Cu;
        // 0x20c110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C114u;
}
