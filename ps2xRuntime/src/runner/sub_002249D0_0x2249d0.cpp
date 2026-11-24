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

// Function: sub_002249D0
// Address: 0x2249d0 - 0x224a40
void sub_002249D0_0x2249d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002249D0_0x2249d0");
#endif

    switch (ctx->pc) {
        case 0x2249fcu: goto label_2249fc;
        case 0x224a14u: goto label_224a14;
        default: break;
    }

    ctx->pc = 0x2249d0u;

    // 0x2249d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2249d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2249d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2249d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2249d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2249d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2249dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2249dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2249e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2249e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2249e4: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2249e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2249e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2249e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2249ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2249ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2249f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2249f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2249f4: 0xc089168  jal         func_2245A0
    ctx->pc = 0x2249F4u;
    SET_GPR_U32(ctx, 31, 0x2249FCu);
    ctx->pc = 0x2249F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249F4u;
    // 0x2249f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x2249F4u, 0x2249FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249FCu;
label_2249fc:
    // 0x2249fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2249fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a04: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x224A04u;
    {
        const bool branch_taken_0x224a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A04u;
        // 0x224a08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a04) {
            ctx->pc = 0x224A28u;
            goto label_224a28;
        }
    }
    ctx->pc = 0x224A0Cu;
    // 0x224a0c: 0xc089396  jal         func_224E58
    ctx->pc = 0x224A0Cu;
    SET_GPR_U32(ctx, 31, 0x224A14u);
    ctx->pc = 0x224E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E58u, 0x224A0Cu, 0x224A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A14u;
label_224a14:
    // 0x224a14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224A14u;
    {
        const bool branch_taken_0x224a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A14u;
        // 0x224a18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a14) {
            ctx->pc = 0x224A2Cu;
            goto label_224a2c;
        }
    }
    ctx->pc = 0x224A1Cu;
    // 0x224a1c: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x224a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x224a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224a24: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x224a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_224a28:
    // 0x224a28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224a2c:
    // 0x224a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224a30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224a34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x224a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224a38: 0x3e00008  jr          $ra
    ctx->pc = 0x224A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A38u;
        // 0x224a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224A40u;
}
