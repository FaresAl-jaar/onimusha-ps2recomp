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

// Function: sub_00238B38
// Address: 0x238b38 - 0x238c38
void sub_00238B38_0x238b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238B38_0x238b38");
#endif

    switch (ctx->pc) {
        case 0x238b64u: goto label_238b64;
        case 0x238b80u: goto label_238b80;
        case 0x238b8cu: goto label_238b8c;
        case 0x238ba4u: goto label_238ba4;
        case 0x238bb4u: goto label_238bb4;
        case 0x238bccu: goto label_238bcc;
        case 0x238bd4u: goto label_238bd4;
        case 0x238bfcu: goto label_238bfc;
        case 0x238c20u: goto label_238c20;
        default: break;
    }

    ctx->pc = 0x238b38u;

    // 0x238b38: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x238b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x238b3c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238b40: 0x24428f48  addiu       $v0, $v0, -0x70B8
    ctx->pc = 0x238b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938440));
    // 0x238b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238b48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238b4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238b54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x238b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x238b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b5c: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x238B5Cu;
    SET_GPR_U32(ctx, 31, 0x238B64u);
    ctx->pc = 0x238B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B5Cu;
    // 0x238b60: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x238B5Cu, 0x238B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B64u;
label_238b64:
    // 0x238b64: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x238b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x238b68: 0x24848f58  addiu       $a0, $a0, -0x70A8
    ctx->pc = 0x238b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938456));
    // 0x238b6c: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x238b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x238b70: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x238b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x238b74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x238b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b78: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x238B78u;
    SET_GPR_U32(ctx, 31, 0x238B80u);
    ctx->pc = 0x238B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B78u;
    // 0x238b7c: 0x26108b20  addiu       $s0, $s0, -0x74E0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x238B78u, 0x238B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B80u;
label_238b80:
    // 0x238b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b84: 0xc0913ec  jal         func_244FB0
    ctx->pc = 0x238B84u;
    SET_GPR_U32(ctx, 31, 0x238B8Cu);
    ctx->pc = 0x238B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B84u;
    // 0x238b88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x238B84u, 0x238B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B8Cu;
label_238b8c:
    // 0x238b8c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x238b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x238b90: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x238b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x238b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b98: 0x2484af60  addiu       $a0, $a0, -0x50A0
    ctx->pc = 0x238b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946656));
    // 0x238b9c: 0xc090e08  jal         func_243820
    ctx->pc = 0x238B9Cu;
    SET_GPR_U32(ctx, 31, 0x238BA4u);
    ctx->pc = 0x238BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B9Cu;
    // 0x238ba0: 0x24a5c5f8  addiu       $a1, $a1, -0x3A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243820u, 0x238B9Cu, 0x238BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BA4u;
label_238ba4:
    // 0x238ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bac: 0xc0913ec  jal         func_244FB0
    ctx->pc = 0x238BACu;
    SET_GPR_U32(ctx, 31, 0x238BB4u);
    ctx->pc = 0x238BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BACu;
    // 0x238bb0: 0x3c100067  lui         $s0, 0x67 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x238BACu, 0x238BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BB4u;
label_238bb4:
    // 0x238bb4: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x238bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x238bb8: 0x2610af68  addiu       $s0, $s0, -0x5098
    ctx->pc = 0x238bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946664));
    // 0x238bbc: 0x24a57d00  addiu       $a1, $a1, 0x7D00
    ctx->pc = 0x238bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32000));
    // 0x238bc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bc4: 0xc090e08  jal         func_243820
    ctx->pc = 0x238BC4u;
    SET_GPR_U32(ctx, 31, 0x238BCCu);
    ctx->pc = 0x238BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BC4u;
    // 0x238bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243820u, 0x238BC4u, 0x238BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BCCu;
label_238bcc:
    // 0x238bcc: 0xc090ed6  jal         func_243B58
    ctx->pc = 0x238BCCu;
    SET_GPR_U32(ctx, 31, 0x238BD4u);
    ctx->pc = 0x238BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BCCu;
    // 0x238bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243B58u, 0x238BCCu, 0x238BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BD4u;
label_238bd4:
    // 0x238bd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x238bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238be0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x238BE0u;
    {
        const bool branch_taken_0x238be0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x238BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BE0u;
        // 0x238be4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238be0) {
            ctx->pc = 0x238C18u;
            goto label_238c18;
        }
    }
    ctx->pc = 0x238BE8u;
    // 0x238be8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x238be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x238bec: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x238becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x238bf0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x238bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x238bf4: 0xc09255e  jal         func_249578
    ctx->pc = 0x238BF4u;
    SET_GPR_U32(ctx, 31, 0x238BFCu);
    ctx->pc = 0x238BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BF4u;
    // 0x238bf8: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249578u, 0x238BF4u, 0x238BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BFCu;
label_238bfc:
    // 0x238bfc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x238bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238c04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238c08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238c0c: 0x8092566  j           func_249598
    ctx->pc = 0x238C0Cu;
    ctx->pc = 0x238C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C0Cu;
    // 0x238c10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249598u;
    sub_00249598_0x249598(rdram, ctx, runtime); return;
    ctx->pc = 0x238C14u;
    // 0x238c14: 0x0  nop
    ctx->pc = 0x238c14u;
    // NOP
label_238c18:
    // 0x238c18: 0xc09255e  jal         func_249578
    ctx->pc = 0x238C18u;
    SET_GPR_U32(ctx, 31, 0x238C20u);
    ctx->pc = 0x249578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249578u, 0x238C18u, 0x238C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C20u;
label_238c20:
    // 0x238c20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x238c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238c28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238c2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238c30: 0x8092566  j           func_249598
    ctx->pc = 0x238C30u;
    ctx->pc = 0x238C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C30u;
    // 0x238c34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249598u;
    sub_00249598_0x249598(rdram, ctx, runtime); return;
    ctx->pc = 0x238C38u;
}
