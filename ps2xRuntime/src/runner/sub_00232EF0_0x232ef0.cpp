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

// Function: sub_00232EF0
// Address: 0x232ef0 - 0x232f9c
void sub_00232EF0_0x232ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232EF0_0x232ef0");
#endif

    switch (ctx->pc) {
        case 0x232f60u: goto label_232f60;
        case 0x232f70u: goto label_232f70;
        case 0x232f7cu: goto label_232f7c;
        default: break;
    }

    ctx->pc = 0x232ef0u;

    // 0x232ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232ef8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232efc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x232f00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x232f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x232f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x232f08: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x232f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232f10: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x232F10u;
    {
        const bool branch_taken_0x232f10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F10u;
        // 0x232f14: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f10) {
            ctx->pc = 0x232F30u;
            goto label_232f30;
        }
    }
    ctx->pc = 0x232F18u;
    // 0x232f18: 0x5e400006  bgtzl       $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x232F18u;
    {
        const bool branch_taken_0x232f18 = (GPR_S64(ctx, 18) > 0);
        if (branch_taken_0x232f18) {
            ctx->pc = 0x232F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232F18u;
            // 0x232f1c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232F34u;
            goto label_232f34;
        }
    }
    ctx->pc = 0x232F20u;
    // 0x232f20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x232f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x232f24: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x232f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x232f28: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x232F28u;
    {
        const bool branch_taken_0x232f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f28) {
            ctx->pc = 0x232F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232F28u;
            // 0x232f2c: 0x8e300094  lw          $s0, 0x94($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232F58u;
            goto label_232f58;
        }
    }
    ctx->pc = 0x232F30u;
label_232f30:
    // 0x232f30: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x232f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_232f34:
    // 0x232f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232f3c: 0x2484ace8  addiu       $a0, $a0, -0x5318
    ctx->pc = 0x232f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946024));
    // 0x232f40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232f44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232f48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232f4c: 0x808baa4  j           func_22EA90
    ctx->pc = 0x232F4Cu;
    ctx->pc = 0x232F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F4Cu;
    // 0x232f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x232F54u;
    // 0x232f54: 0x0  nop
    ctx->pc = 0x232f54u;
    // NOP
label_232f58:
    // 0x232f58: 0xc092dee  jal         func_24B7B8
    ctx->pc = 0x232F58u;
    SET_GPR_U32(ctx, 31, 0x232F60u);
    ctx->pc = 0x232F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F58u;
    // 0x232f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B7B8u, 0x232F58u, 0x232F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F60u;
label_232f60:
    // 0x232f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f64: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x232f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f68: 0xc08cac6  jal         func_232B18
    ctx->pc = 0x232F68u;
    SET_GPR_U32(ctx, 31, 0x232F70u);
    ctx->pc = 0x232F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F68u;
    // 0x232f6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B18u, 0x232F68u, 0x232F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F70u;
label_232f70:
    // 0x232f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f74: 0xc092fd2  jal         func_24BF48
    ctx->pc = 0x232F74u;
    SET_GPR_U32(ctx, 31, 0x232F7Cu);
    ctx->pc = 0x232F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F74u;
    // 0x232f78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BF48u, 0x232F74u, 0x232F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F7Cu;
label_232f7c:
    // 0x232f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232f84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232f88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232f8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232f94: 0x808cb04  j           func_232C10
    ctx->pc = 0x232F94u;
    ctx->pc = 0x232F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F94u;
    // 0x232f98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C10u;
    sub_00232C10_0x232c10(rdram, ctx, runtime); return;
    ctx->pc = 0x232F9Cu;
}
