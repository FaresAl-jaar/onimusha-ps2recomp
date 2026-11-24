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

// Function: sub_00232DF0
// Address: 0x232df0 - 0x232e9c
void sub_00232DF0_0x232df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232DF0_0x232df0");
#endif

    switch (ctx->pc) {
        case 0x232e58u: goto label_232e58;
        case 0x232e6cu: goto label_232e6c;
        case 0x232e78u: goto label_232e78;
        default: break;
    }

    ctx->pc = 0x232df0u;

    // 0x232df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232df4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232df8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232dfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x232e00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x232e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x232e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x232e08: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x232e08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x232e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x232e10: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x232e10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232e18: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x232E18u;
    {
        const bool branch_taken_0x232e18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E18u;
        // 0x232e1c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e18) {
            ctx->pc = 0x232E28u;
            goto label_232e28;
        }
    }
    ctx->pc = 0x232E20u;
    // 0x232e20: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x232E20u;
    {
        const bool branch_taken_0x232e20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x232e20) {
            ctx->pc = 0x232E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232E20u;
            // 0x232e24: 0x8e300094  lw          $s0, 0x94($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232E50u;
            goto label_232e50;
        }
    }
    ctx->pc = 0x232E28u;
label_232e28:
    // 0x232e28: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x232e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x232e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232e30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232e34: 0x2484acb0  addiu       $a0, $a0, -0x5350
    ctx->pc = 0x232e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945968));
    // 0x232e38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232e38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232e3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232e3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232e40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x232e40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232e44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x232e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x232e48: 0x808baa4  j           func_22EA90
    ctx->pc = 0x232E48u;
    ctx->pc = 0x232E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E48u;
    // 0x232e4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x232E50u;
label_232e50:
    // 0x232e50: 0xc092dee  jal         func_24B7B8
    ctx->pc = 0x232E50u;
    SET_GPR_U32(ctx, 31, 0x232E58u);
    ctx->pc = 0x232E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E50u;
    // 0x232e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B7B8u, 0x232E50u, 0x232E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E58u;
label_232e58:
    // 0x232e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x232e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e60: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x232e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e64: 0xc08ca96  jal         func_232A58
    ctx->pc = 0x232E64u;
    SET_GPR_U32(ctx, 31, 0x232E6Cu);
    ctx->pc = 0x232E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E64u;
    // 0x232e68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232A58u, 0x232E64u, 0x232E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E6Cu;
label_232e6c:
    // 0x232e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e70: 0xc092fd2  jal         func_24BF48
    ctx->pc = 0x232E70u;
    SET_GPR_U32(ctx, 31, 0x232E78u);
    ctx->pc = 0x232E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E70u;
    // 0x232e74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BF48u, 0x232E70u, 0x232E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E78u;
label_232e78:
    // 0x232e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232e80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232e80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232e84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232e88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232e88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232e8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x232e8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232e90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x232e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x232e94: 0x808cb04  j           func_232C10
    ctx->pc = 0x232E94u;
    ctx->pc = 0x232E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E94u;
    // 0x232e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C10u;
    sub_00232C10_0x232c10(rdram, ctx, runtime); return;
    ctx->pc = 0x232E9Cu;
}
