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

// Function: sub_002069D8
// Address: 0x2069d8 - 0x206a98
void sub_002069D8_0x2069d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002069D8_0x2069d8");
#endif

    switch (ctx->pc) {
        case 0x206a04u: goto label_206a04;
        case 0x206a60u: goto label_206a60;
        case 0x206a6cu: goto label_206a6c;
        default: break;
    }

    ctx->pc = 0x2069d8u;

    // 0x2069d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2069d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2069dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2069dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2069e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2069e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2069e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2069e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2069e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2069ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2069f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2069f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2069f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2069f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2069f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2069fc: 0xc081d84  jal         func_207610
    ctx->pc = 0x2069FCu;
    SET_GPR_U32(ctx, 31, 0x206A04u);
    ctx->pc = 0x206A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069FCu;
    // 0x206a00: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2069FCu, 0x206A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A04u;
label_206a04:
    // 0x206a04: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x206a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x206a08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206a0c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x206A0Cu;
    {
        const bool branch_taken_0x206a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x206A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A0Cu;
        // 0x206a10: 0x248474f0  addiu       $a0, $a0, 0x74F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a0c) {
            ctx->pc = 0x206A30u;
            goto label_206a30;
        }
    }
    ctx->pc = 0x206A14u;
    // 0x206a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206a18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206a1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206a20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x206a20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x206a24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206a28: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x206A28u;
    ctx->pc = 0x206A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A28u;
    // 0x206a2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x206A30u;
label_206a30:
    // 0x206a30: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x206A30u;
    {
        const bool branch_taken_0x206a30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x206A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A30u;
        // 0x206a34: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a30) {
            ctx->pc = 0x206A58u;
            goto label_206a58;
        }
    }
    ctx->pc = 0x206A38u;
    // 0x206a38: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x206a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x206a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206a40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206a44: 0x24847528  addiu       $a0, $a0, 0x7528
    ctx->pc = 0x206a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29992));
    // 0x206a48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206a4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x206a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x206a50: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x206A50u;
    ctx->pc = 0x206A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A50u;
    // 0x206a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x206A58u;
label_206a58:
    // 0x206a58: 0xc08200a  jal         func_208028
    ctx->pc = 0x206A58u;
    SET_GPR_U32(ctx, 31, 0x206A60u);
    ctx->pc = 0x206A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A58u;
    // 0x206a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208028u, 0x206A58u, 0x206A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A60u;
label_206a60:
    // 0x206a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a64: 0xc0818ee  jal         func_2063B8
    ctx->pc = 0x206A64u;
    SET_GPR_U32(ctx, 31, 0x206A6Cu);
    ctx->pc = 0x206A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A64u;
    // 0x206a68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2063B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2063B8u, 0x206A64u, 0x206A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A6Cu;
label_206a6c:
    // 0x206a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206a78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x206a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206a80: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x206a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x206a84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x206a88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206a8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206a90: 0x8081a30  j           func_2068C0
    ctx->pc = 0x206A90u;
    ctx->pc = 0x206A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A90u;
    // 0x206a94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2068C0u;
    sub_002068C0_0x2068c0(rdram, ctx, runtime); return;
    ctx->pc = 0x206A98u;
}
