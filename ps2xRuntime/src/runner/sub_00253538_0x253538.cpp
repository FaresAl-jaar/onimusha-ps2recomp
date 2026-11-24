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

// Function: sub_00253538
// Address: 0x253538 - 0x2535a4
void sub_00253538_0x253538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253538_0x253538");
#endif

    switch (ctx->pc) {
        case 0x25356cu: goto label_25356c;
        case 0x253584u: goto label_253584;
        default: break;
    }

    ctx->pc = 0x253538u;

    // 0x253538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25353c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25353cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x253544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x253548: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x253548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25354c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25354cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x253550: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x253550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253554: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x253554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x253558: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x253558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25355c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x25355cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x253560: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x253560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x253564: 0xc094ba8  jal         func_252EA0
    ctx->pc = 0x253564u;
    SET_GPR_U32(ctx, 31, 0x25356Cu);
    ctx->pc = 0x253568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253564u;
    // 0x253568: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EA0u, 0x253564u, 0x25356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25356Cu;
label_25356c:
    // 0x25356c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253574: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x253574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253578: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x253578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25357c: 0xc094d6a  jal         func_2535A8
    ctx->pc = 0x25357Cu;
    SET_GPR_U32(ctx, 31, 0x253584u);
    ctx->pc = 0x253580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25357Cu;
    // 0x253580: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535A8u, 0x25357Cu, 0x253584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253584u;
label_253584:
    // 0x253584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25358c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25358cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253590: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x253590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253594: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x253594u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253598: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x253598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25359c: 0x8094bae  j           func_252EB8
    ctx->pc = 0x25359Cu;
    ctx->pc = 0x2535A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25359Cu;
    // 0x2535a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EB8u;
    sub_00252EB8_0x252eb8(rdram, ctx, runtime); return;
    ctx->pc = 0x2535A4u;
}
