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

// Function: sub_001272C0
// Address: 0x1272c0 - 0x127314
void sub_001272C0_0x1272c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001272C0_0x1272c0");
#endif

    switch (ctx->pc) {
        case 0x1272e8u: goto label_1272e8;
        default: break;
    }

    ctx->pc = 0x1272c0u;

    // 0x1272c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1272c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1272c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1272c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1272c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1272c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1272cc: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x1272ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x1272d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1272d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1272d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1272d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272d8: 0xae00668c  sw          $zero, 0x668C($s0)
    ctx->pc = 0x1272d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x93668Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x93668Cu, _value); } while (0);
    // 0x1272dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1272dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272e0: 0xc0439ee  jal         func_10E7B8
    ctx->pc = 0x1272E0u;
    SET_GPR_U32(ctx, 31, 0x1272E8u);
    ctx->pc = 0x1272E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1272E0u;
    // 0x1272e4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7B8u, 0x1272E0u, 0x1272E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1272E8u;
label_1272e8:
    // 0x1272e8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1272e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1272ec: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1272ECu;
    {
        const bool branch_taken_0x1272ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x1272ec) {
            ctx->pc = 0x1272F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1272ECu;
            // 0x1272f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127304u;
            goto label_127304;
        }
    }
    ctx->pc = 0x1272F4u;
    // 0x1272f4: 0x8e0f668c  lw          $t7, 0x668C($s0)
    ctx->pc = 0x1272f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26252)));
    // 0x1272f8: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1272F8u;
    {
        const bool branch_taken_0x1272f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1272f8) {
            ctx->pc = 0x1272FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1272F8u;
            // 0x1272fc: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127300u;
            goto label_127300;
        }
    }
    ctx->pc = 0x127300u;
label_127300:
    // 0x127300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_127304:
    // 0x127304: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x127308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12730c: 0x3e00008  jr          $ra
    ctx->pc = 0x12730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12730Cu;
        // 0x127310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127314u;
}
