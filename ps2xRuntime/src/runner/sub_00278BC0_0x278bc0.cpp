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

// Function: sub_00278BC0
// Address: 0x278bc0 - 0x278c80
void sub_00278BC0_0x278bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278BC0_0x278bc0");
#endif

    switch (ctx->pc) {
        case 0x278bfcu: goto label_278bfc;
        case 0x278c14u: goto label_278c14;
        case 0x278c30u: goto label_278c30;
        case 0x278c4cu: goto label_278c4c;
        case 0x278c68u: goto label_278c68;
        default: break;
    }

    ctx->pc = 0x278bc0u;

    // 0x278bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x278bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x278bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x278bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278bd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x278bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bd4: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x278BD4u;
    {
        const bool branch_taken_0x278bd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x278BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BD4u;
        // 0x278bd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278bd4) {
            ctx->pc = 0x278C68u;
            goto label_278c68;
        }
    }
    ctx->pc = 0x278BDCu;
    // 0x278bdc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x278bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x278be0: 0x24427500  addiu       $v0, $v0, 0x7500
    ctx->pc = 0x278be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29952));
    // 0x278be4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x278be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x278be8: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x278be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x278bec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278BECu;
    {
        const bool branch_taken_0x278bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x278bec) {
            ctx->pc = 0x278C00u;
            goto label_278c00;
        }
    }
    ctx->pc = 0x278BF4u;
    // 0x278bf4: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x278BF4u;
    SET_GPR_U32(ctx, 31, 0x278BFCu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x278BF4u, 0x278BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278BFCu;
label_278bfc:
    // 0x278bfc: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x278bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_278c00:
    // 0x278c00: 0x8e24011c  lw          $a0, 0x11C($s1)
    ctx->pc = 0x278c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x278c04: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278C04u;
    {
        const bool branch_taken_0x278c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x278c04) {
            ctx->pc = 0x278C18u;
            goto label_278c18;
        }
    }
    ctx->pc = 0x278C0Cu;
    // 0x278c0c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x278C0Cu;
    SET_GPR_U32(ctx, 31, 0x278C14u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x278C0Cu, 0x278C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C14u;
label_278c14:
    // 0x278c14: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x278c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
label_278c18:
    // 0x278c18: 0x922300b3  lbu         $v1, 0xB3($s1)
    ctx->pc = 0x278c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 179)));
    // 0x278c1c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x278c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x278c20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278C20u;
    {
        const bool branch_taken_0x278c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x278C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C20u;
        // 0x278c24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c20) {
            ctx->pc = 0x278C30u;
            goto label_278c30;
        }
    }
    ctx->pc = 0x278C28u;
    // 0x278c28: 0xc09d944  jal         func_276510
    ctx->pc = 0x278C28u;
    SET_GPR_U32(ctx, 31, 0x278C30u);
    ctx->pc = 0x276510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276510u, 0x278C28u, 0x278C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C30u;
label_278c30:
    // 0x278c30: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x278C30u;
    {
        const bool branch_taken_0x278c30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C30u;
        // 0x278c34: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c30) {
            ctx->pc = 0x278C50u;
            goto label_278c50;
        }
    }
    ctx->pc = 0x278C38u;
    // 0x278c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c3c: 0x24427520  addiu       $v0, $v0, 0x7520
    ctx->pc = 0x278c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29984));
    // 0x278c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x278c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c44: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x278C44u;
    SET_GPR_U32(ctx, 31, 0x278C4Cu);
    ctx->pc = 0x278C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C44u;
    // 0x278c48: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x278C44u, 0x278C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C4Cu;
label_278c4c:
    // 0x278c4c: 0x0  nop
    ctx->pc = 0x278c4cu;
    // NOP
label_278c50:
    // 0x278c50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x278c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x278c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x278c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x278c58: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278C58u;
    {
        const bool branch_taken_0x278c58 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x278C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C58u;
        // 0x278c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c58) {
            ctx->pc = 0x278C68u;
            goto label_278c68;
        }
    }
    ctx->pc = 0x278C60u;
    // 0x278c60: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x278C60u;
    SET_GPR_U32(ctx, 31, 0x278C68u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x278C60u, 0x278C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C68u;
label_278c68:
    // 0x278c68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x278c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x278c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x278c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278c78: 0x3e00008  jr          $ra
    ctx->pc = 0x278C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C78u;
        // 0x278c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278C80u;
}
