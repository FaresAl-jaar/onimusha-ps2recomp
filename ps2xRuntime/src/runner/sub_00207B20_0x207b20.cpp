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

// Function: sub_00207B20
// Address: 0x207b20 - 0x207bec
void sub_00207B20_0x207b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207B20_0x207b20");
#endif

    switch (ctx->pc) {
        case 0x207b58u: goto label_207b58;
        case 0x207b9cu: goto label_207b9c;
        case 0x207bacu: goto label_207bac;
        case 0x207bb8u: goto label_207bb8;
        default: break;
    }

    ctx->pc = 0x207b20u;

    // 0x207b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207b28: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x207b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207b2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207b30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x207b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x207b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x207b38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x207b38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x207b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x207b40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x207b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x207b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x207b48: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x207b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x207b4c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x207b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x207b50: 0xc081d84  jal         func_207610
    ctx->pc = 0x207B50u;
    SET_GPR_U32(ctx, 31, 0x207B58u);
    ctx->pc = 0x207B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B50u;
    // 0x207b54: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207B50u, 0x207B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B58u;
label_207b58:
    // 0x207b58: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207b5c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x207b5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b60: 0x12900009  beq         $s4, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207B60u;
    {
        const bool branch_taken_0x207b60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        ctx->pc = 0x207B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B60u;
        // 0x207b64: 0x24847920  addiu       $a0, $a0, 0x7920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b60) {
            ctx->pc = 0x207B88u;
            goto label_207b88;
        }
    }
    ctx->pc = 0x207B68u;
    // 0x207b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207b6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207b70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207b74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x207b74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207b78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x207b78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207b7c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x207b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x207b80: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x207B80u;
    ctx->pc = 0x207B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B80u;
    // 0x207b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x207B88u;
label_207b88:
    // 0x207b88: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x207b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x207b8c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x207B8Cu;
    {
        const bool branch_taken_0x207b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B8Cu;
        // 0x207b90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b8c) {
            ctx->pc = 0x207BCCu;
            goto label_207bcc;
        }
    }
    ctx->pc = 0x207B94u;
    // 0x207b94: 0xc0881ba  jal         func_2206E8
    ctx->pc = 0x207B94u;
    SET_GPR_U32(ctx, 31, 0x207B9Cu);
    ctx->pc = 0x207B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B94u;
    // 0x207b98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2206E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2206E8u, 0x207B94u, 0x207B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B9Cu;
label_207b9c:
    // 0x207b9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207B9Cu;
    {
        const bool branch_taken_0x207b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B9Cu;
        // 0x207ba0: 0x2404fecb  addiu       $a0, $zero, -0x135 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966987));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b9c) {
            ctx->pc = 0x207BB8u;
            goto label_207bb8;
        }
    }
    ctx->pc = 0x207BA4u;
    // 0x207ba4: 0xc08168c  jal         func_205A30
    ctx->pc = 0x207BA4u;
    SET_GPR_U32(ctx, 31, 0x207BACu);
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x207BA4u, 0x207BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BACu;
label_207bac:
    // 0x207bac: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207bb0: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207BB0u;
    SET_GPR_U32(ctx, 31, 0x207BB8u);
    ctx->pc = 0x207BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207BB0u;
    // 0x207bb4: 0x24847950  addiu       $a0, $a0, 0x7950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207BB0u, 0x207BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BB8u;
label_207bb8:
    // 0x207bb8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x207bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x207bbc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207BBCu;
    {
        const bool branch_taken_0x207bbc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x207BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BBCu;
        // 0x207bc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bbc) {
            ctx->pc = 0x207BD0u;
            goto label_207bd0;
        }
    }
    ctx->pc = 0x207BC4u;
    // 0x207bc4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x207bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x207bc8: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x207bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_207bcc:
    // 0x207bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207bd0:
    // 0x207bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207bd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207bd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x207bd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207bdc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x207bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207be0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x207be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x207be4: 0x3e00008  jr          $ra
    ctx->pc = 0x207BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BE4u;
        // 0x207be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207BECu;
}
