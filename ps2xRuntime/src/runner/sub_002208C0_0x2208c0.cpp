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

// Function: sub_002208C0
// Address: 0x2208c0 - 0x220934
void sub_002208C0_0x2208c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002208C0_0x2208c0");
#endif

    switch (ctx->pc) {
        case 0x2208e4u: goto label_2208e4;
        default: break;
    }

    ctx->pc = 0x2208c0u;

    // 0x2208c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2208c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2208c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2208c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2208c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2208c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2208ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2208d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2208d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2208d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2208d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2208d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2208dc: 0xc084968  jal         func_2125A0
    ctx->pc = 0x2208DCu;
    SET_GPR_U32(ctx, 31, 0x2208E4u);
    ctx->pc = 0x2208E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2208DCu;
    // 0x2208e0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x2208DCu, 0x2208E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208E4u;
label_2208e4:
    // 0x2208e4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x2208e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2208e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2208e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2208ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2208F0u;
    {
        const bool branch_taken_0x2208f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208F0u;
        // 0x2208f4: 0x34a50128  ori         $a1, $a1, 0x128 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)296);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208f0) {
            ctx->pc = 0x220918u;
            goto label_220918;
        }
    }
    ctx->pc = 0x2208F8u;
    // 0x2208f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2208f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2208fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2208fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220904: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220908: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22090c: 0x80848e0  j           func_212380
    ctx->pc = 0x22090Cu;
    ctx->pc = 0x220910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22090Cu;
    // 0x220910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x220914u;
    // 0x220914: 0x0  nop
    ctx->pc = 0x220914u;
    // NOP
label_220918:
    // 0x220918: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x220918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22091c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22091cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220928: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22092c: 0x808824e  j           func_220938
    ctx->pc = 0x22092Cu;
    ctx->pc = 0x220930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22092Cu;
    // 0x220930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220938u;
    sub_00220938_0x220938(rdram, ctx, runtime); return;
    ctx->pc = 0x220934u;
}
