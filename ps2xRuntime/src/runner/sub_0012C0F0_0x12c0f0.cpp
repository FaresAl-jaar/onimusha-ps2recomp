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

// Function: sub_0012C0F0
// Address: 0x12c0f0 - 0x12c14c
void sub_0012C0F0_0x12c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C0F0_0x12c0f0");
#endif

    switch (ctx->pc) {
        case 0x12c11cu: goto label_12c11c;
        default: break;
    }

    ctx->pc = 0x12c0f0u;

    // 0x12c0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c0f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c0f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c0fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12c0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c104: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12c104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c108: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x12c108u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x12c10c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12c10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c110: 0xae00668c  sw          $zero, 0x668C($s0)
    ctx->pc = 0x12c110u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x93668Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x93668Cu, _value); } while (0);
    // 0x12c114: 0xc04396a  jal         func_10E5A8
    ctx->pc = 0x12C114u;
    SET_GPR_U32(ctx, 31, 0x12C11Cu);
    ctx->pc = 0x12C118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C114u;
    // 0x12c118: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E5A8u, 0x12C114u, 0x12C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C11Cu;
label_12c11c:
    // 0x12c11c: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x12c11cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c120: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12c120u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c124: 0x15ee0004  bne         $t7, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C124u;
    {
        const bool branch_taken_0x12c124 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x12C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C124u;
        // 0x12c128: 0x1e0102d  daddu       $v0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c124) {
            ctx->pc = 0x12C138u;
            goto label_12c138;
        }
    }
    ctx->pc = 0x12C12Cu;
    // 0x12c12c: 0x8e0f668c  lw          $t7, 0x668C($s0)
    ctx->pc = 0x12c12cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26252)));
    // 0x12c130: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12C130u;
    {
        const bool branch_taken_0x12c130 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c130) {
            ctx->pc = 0x12C134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C130u;
            // 0x12c134: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C138u;
            goto label_12c138;
        }
    }
    ctx->pc = 0x12C138u;
label_12c138:
    // 0x12c138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c13c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c13cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c144: 0x3e00008  jr          $ra
    ctx->pc = 0x12C144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C144u;
        // 0x12c148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C14Cu;
}
