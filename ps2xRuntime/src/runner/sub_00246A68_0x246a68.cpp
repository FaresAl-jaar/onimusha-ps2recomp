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

// Function: sub_00246A68
// Address: 0x246a68 - 0x246aec
void sub_00246A68_0x246a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246A68_0x246a68");
#endif

    switch (ctx->pc) {
        case 0x246a90u: goto label_246a90;
        case 0x246aa4u: goto label_246aa4;
        case 0x246aacu: goto label_246aac;
        case 0x246ab8u: goto label_246ab8;
        case 0x246ac8u: goto label_246ac8;
        default: break;
    }

    ctx->pc = 0x246a68u;

    // 0x246a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246a6c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x246a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x246a70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x246a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x246a74: 0x2452e9bc  addiu       $s2, $v0, -0x1644
    ctx->pc = 0x246a74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961596));
    // 0x246a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x246a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246a80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x246a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x246a84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x246a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x246a88: 0xc094ece  jal         func_253B38
    ctx->pc = 0x246A88u;
    SET_GPR_U32(ctx, 31, 0x246A90u);
    ctx->pc = 0x246A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A88u;
    // 0x246a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B38u, 0x246A88u, 0x246A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A90u;
label_246a90:
    // 0x246a90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x246a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246a94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x246A94u;
    {
        const bool branch_taken_0x246a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A94u;
        // 0x246a98: 0x34049600  ori         $a0, $zero, 0x9600 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38400);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a94) {
            ctx->pc = 0x246AD4u;
            goto label_246ad4;
        }
    }
    ctx->pc = 0x246A9Cu;
    // 0x246a9c: 0xc091a44  jal         func_246910
    ctx->pc = 0x246A9Cu;
    SET_GPR_U32(ctx, 31, 0x246AA4u);
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246A9Cu, 0x246AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AA4u;
label_246aa4:
    // 0x246aa4: 0xc048172  jal         func_1205C8
    ctx->pc = 0x246AA4u;
    SET_GPR_U32(ctx, 31, 0x246AACu);
    ctx->pc = 0x246AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AA4u;
    // 0x246aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1205C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1205C8u, 0x246AA4u, 0x246AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AACu;
label_246aac:
    // 0x246aac: 0x34049601  ori         $a0, $zero, 0x9601
    ctx->pc = 0x246aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38401);
    // 0x246ab0: 0xc091a44  jal         func_246910
    ctx->pc = 0x246AB0u;
    SET_GPR_U32(ctx, 31, 0x246AB8u);
    ctx->pc = 0x246AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AB0u;
    // 0x246ab4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246AB0u, 0x246AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AB8u;
label_246ab8:
    // 0x246ab8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x246AB8u;
    {
        const bool branch_taken_0x246ab8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x246ab8) {
            ctx->pc = 0x246ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246AB8u;
            // 0x246abc: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246AD0u;
            goto label_246ad0;
        }
    }
    ctx->pc = 0x246AC0u;
    // 0x246ac0: 0xc0481d6  jal         func_120758
    ctx->pc = 0x246AC0u;
    SET_GPR_U32(ctx, 31, 0x246AC8u);
    ctx->pc = 0x120758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120758u, 0x246AC0u, 0x246AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AC8u;
label_246ac8:
    // 0x246ac8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x246ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246acc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x246accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_246ad0:
    // 0x246ad0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x246ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246ad4:
    // 0x246ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246ad8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246ad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246adc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x246adcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246ae0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x246ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x246ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x246AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AE4u;
        // 0x246ae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246AECu;
}
