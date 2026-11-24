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

// Function: sub_001247B8
// Address: 0x1247b8 - 0x124810
void sub_001247B8_0x1247b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001247B8_0x1247b8");
#endif

    switch (ctx->pc) {
        case 0x1247e4u: goto label_1247e4;
        default: break;
    }

    ctx->pc = 0x1247b8u;

    // 0x1247b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1247b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1247bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1247bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1247c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1247c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1247c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1247c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1247c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1247cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1247ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247d0: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x1247d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x1247d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1247d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247d8: 0xae00668c  sw          $zero, 0x668C($s0)
    ctx->pc = 0x1247d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x93668Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x93668Cu, _value); } while (0);
    // 0x1247dc: 0xc0439b6  jal         func_10E6D8
    ctx->pc = 0x1247DCu;
    SET_GPR_U32(ctx, 31, 0x1247E4u);
    ctx->pc = 0x1247E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1247DCu;
    // 0x1247e0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E6D8u, 0x1247DCu, 0x1247E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1247E4u;
label_1247e4:
    // 0x1247e4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1247e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1247e8: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1247E8u;
    {
        const bool branch_taken_0x1247e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x1247e8) {
            ctx->pc = 0x1247ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1247E8u;
            // 0x1247ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124800u;
            goto label_124800;
        }
    }
    ctx->pc = 0x1247F0u;
    // 0x1247f0: 0x8e0f668c  lw          $t7, 0x668C($s0)
    ctx->pc = 0x1247f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26252)));
    // 0x1247f4: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1247F4u;
    {
        const bool branch_taken_0x1247f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1247f4) {
            ctx->pc = 0x1247F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1247F4u;
            // 0x1247f8: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1247FCu;
            goto label_1247fc;
        }
    }
    ctx->pc = 0x1247FCu;
label_1247fc:
    // 0x1247fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1247fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124800:
    // 0x124800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124808: 0x3e00008  jr          $ra
    ctx->pc = 0x124808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124808u;
        // 0x12480c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124810u;
}
