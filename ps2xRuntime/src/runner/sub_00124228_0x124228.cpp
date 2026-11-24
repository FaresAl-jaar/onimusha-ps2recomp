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

// Function: sub_00124228
// Address: 0x124228 - 0x12427c
void sub_00124228_0x124228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124228_0x124228");
#endif

    switch (ctx->pc) {
        case 0x124250u: goto label_124250;
        default: break;
    }

    ctx->pc = 0x124228u;

    // 0x124228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12422c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12422cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124234: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x124234u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x124238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12423c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12423cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124240: 0xae00668c  sw          $zero, 0x668C($s0)
    ctx->pc = 0x124240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x93668Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x93668Cu, _value); } while (0);
    // 0x124244: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x124244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124248: 0xc0439e6  jal         func_10E798
    ctx->pc = 0x124248u;
    SET_GPR_U32(ctx, 31, 0x124250u);
    ctx->pc = 0x12424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124248u;
    // 0x12424c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E798u, 0x124248u, 0x124250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124250u;
label_124250:
    // 0x124250: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x124250u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124254: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x124254u;
    {
        const bool branch_taken_0x124254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x124254) {
            ctx->pc = 0x124258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124254u;
            // 0x124258: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12426Cu;
            goto label_12426c;
        }
    }
    ctx->pc = 0x12425Cu;
    // 0x12425c: 0x8e0f668c  lw          $t7, 0x668C($s0)
    ctx->pc = 0x12425cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26252)));
    // 0x124260: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124260u;
    {
        const bool branch_taken_0x124260 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x124260) {
            ctx->pc = 0x124264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124260u;
            // 0x124264: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124268u;
            goto label_124268;
        }
    }
    ctx->pc = 0x124268u;
label_124268:
    // 0x124268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12426c:
    // 0x12426c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12426cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124274: 0x3e00008  jr          $ra
    ctx->pc = 0x124274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124274u;
        // 0x124278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12427Cu;
}
