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

// Function: sub_0021C0F0
// Address: 0x21c0f0 - 0x21c15c
void sub_0021C0F0_0x21c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C0F0_0x21c0f0");
#endif

    switch (ctx->pc) {
        case 0x21c10cu: goto label_21c10c;
        case 0x21c144u: goto label_21c144;
        default: break;
    }

    ctx->pc = 0x21c0f0u;

    // 0x21c0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c0f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21c0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c104: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21C104u;
    SET_GPR_U32(ctx, 31, 0x21C10Cu);
    ctx->pc = 0x21C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C104u;
    // 0x21c108: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21C104u, 0x21C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C10Cu;
label_21c10c:
    // 0x21c10c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21c10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21c110: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c114: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21c114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c118: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C118u;
    {
        const bool branch_taken_0x21c118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C118u;
        // 0x21c11c: 0x34a50146  ori         $a1, $a1, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)326);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c118) {
            ctx->pc = 0x21C138u;
            goto label_21c138;
        }
    }
    ctx->pc = 0x21C120u;
    // 0x21c120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c12c: 0x80848e0  j           func_212380
    ctx->pc = 0x21C12Cu;
    ctx->pc = 0x21C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C12Cu;
    // 0x21c130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21C134u;
    // 0x21c134: 0x0  nop
    ctx->pc = 0x21c134u;
    // NOP
label_21c138:
    // 0x21c138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c13c: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x21C13Cu;
    SET_GPR_U32(ctx, 31, 0x21C144u);
    ctx->pc = 0x21C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C13Cu;
    // 0x21c140: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x21C13Cu, 0x21C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C144u;
label_21c144:
    // 0x21c144: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c14c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c14cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c154: 0x3e00008  jr          $ra
    ctx->pc = 0x21C154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C154u;
        // 0x21c158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C15Cu;
}
