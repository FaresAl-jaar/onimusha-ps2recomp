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

// Function: sub_00214E08
// Address: 0x214e08 - 0x214e8c
void sub_00214E08_0x214e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214E08_0x214e08");
#endif

    switch (ctx->pc) {
        case 0x214e34u: goto label_214e34;
        default: break;
    }

    ctx->pc = 0x214e08u;

    // 0x214e08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214e10: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x214e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214e18: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x214e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214e20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x214e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214e28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x214e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x214e2c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x214E2Cu;
    SET_GPR_U32(ctx, 31, 0x214E34u);
    ctx->pc = 0x214E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E2Cu;
    // 0x214e30: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x214E2Cu, 0x214E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E34u;
label_214e34:
    // 0x214e34: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x214e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x214e38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x214e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x214e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x214E44u;
    {
        const bool branch_taken_0x214e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E44u;
        // 0x214e48: 0x34a50185  ori         $a1, $a1, 0x185 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e44) {
            ctx->pc = 0x214E68u;
            goto label_214e68;
        }
    }
    ctx->pc = 0x214E4Cu;
    // 0x214e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214e50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214e54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214e54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214e58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214e5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x214e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214e60: 0x80848e0  j           func_212380
    ctx->pc = 0x214E60u;
    ctx->pc = 0x214E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E60u;
    // 0x214e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x214E68u;
label_214e68:
    // 0x214e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x214e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214e7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214e80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x214e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214e84: 0x80853a4  j           func_214E90
    ctx->pc = 0x214E84u;
    ctx->pc = 0x214E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E84u;
    // 0x214e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214E90u;
    sub_00214E90_0x214e90(rdram, ctx, runtime); return;
    ctx->pc = 0x214E8Cu;
}
