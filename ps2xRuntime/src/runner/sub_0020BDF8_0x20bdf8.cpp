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

// Function: sub_0020BDF8
// Address: 0x20bdf8 - 0x20bea0
void sub_0020BDF8_0x20bdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BDF8_0x20bdf8");
#endif

    switch (ctx->pc) {
        case 0x20be24u: goto label_20be24;
        case 0x20be34u: goto label_20be34;
        case 0x20be48u: goto label_20be48;
        case 0x20be60u: goto label_20be60;
        case 0x20be70u: goto label_20be70;
        case 0x20be78u: goto label_20be78;
        default: break;
    }

    ctx->pc = 0x20bdf8u;

    // 0x20bdf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20bdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20bdfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20be00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20be00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20be04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20be04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20be08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20be0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20be10: 0x82020071  lb          $v0, 0x71($s0)
    ctx->pc = 0x20be10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
    // 0x20be14: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20BE14u;
    {
        const bool branch_taken_0x20be14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE14u;
        // 0x20be18: 0x8e11003c  lw          $s1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be14) {
            ctx->pc = 0x20BE4Cu;
            goto label_20be4c;
        }
    }
    ctx->pc = 0x20BE1Cu;
    // 0x20be1c: 0xc092e78  jal         func_24B9E0
    ctx->pc = 0x20BE1Cu;
    SET_GPR_U32(ctx, 31, 0x20BE24u);
    ctx->pc = 0x20BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE1Cu;
    // 0x20be20: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9E0u, 0x20BE1Cu, 0x20BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE24u;
label_20be24:
    // 0x20be24: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20BE24u;
    {
        const bool branch_taken_0x20be24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20be24) {
            ctx->pc = 0x20BE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BE24u;
            // 0x20be28: 0x96020070  lhu         $v0, 0x70($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BE50u;
            goto label_20be50;
        }
    }
    ctx->pc = 0x20BE2Cu;
    // 0x20be2c: 0xc087828  jal         func_21E0A0
    ctx->pc = 0x20BE2Cu;
    SET_GPR_U32(ctx, 31, 0x20BE34u);
    ctx->pc = 0x20BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE2Cu;
    // 0x20be30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E0A0u, 0x20BE2Cu, 0x20BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE34u;
label_20be34:
    // 0x20be34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BE34u;
    {
        const bool branch_taken_0x20be34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20be34) {
            ctx->pc = 0x20BE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BE34u;
            // 0x20be38: 0xa2000071  sb          $zero, 0x71($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BE4Cu;
            goto label_20be4c;
        }
    }
    ctx->pc = 0x20BE3Cu;
    // 0x20be3c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20be40: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20BE40u;
    SET_GPR_U32(ctx, 31, 0x20BE48u);
    ctx->pc = 0x20BE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE40u;
    // 0x20be44: 0x24848680  addiu       $a0, $a0, -0x7980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20BE40u, 0x20BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE48u;
label_20be48:
    // 0x20be48: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x20be48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_20be4c:
    // 0x20be4c: 0x96020070  lhu         $v0, 0x70($s0)
    ctx->pc = 0x20be4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_20be50:
    // 0x20be50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20BE50u;
    {
        const bool branch_taken_0x20be50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20be50) {
            ctx->pc = 0x20BE70u;
            goto label_20be70;
        }
    }
    ctx->pc = 0x20BE58u;
    // 0x20be58: 0xc092e78  jal         func_24B9E0
    ctx->pc = 0x20BE58u;
    SET_GPR_U32(ctx, 31, 0x20BE60u);
    ctx->pc = 0x20BE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE58u;
    // 0x20be5c: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9E0u, 0x20BE58u, 0x20BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE60u;
label_20be60:
    // 0x20be60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BE60u;
    {
        const bool branch_taken_0x20be60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20be60) {
            ctx->pc = 0x20BE70u;
            goto label_20be70;
        }
    }
    ctx->pc = 0x20BE68u;
    // 0x20be68: 0xc0819f4  jal         func_2067D0
    ctx->pc = 0x20BE68u;
    SET_GPR_U32(ctx, 31, 0x20BE70u);
    ctx->pc = 0x20BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE68u;
    // 0x20be6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2067D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067D0u, 0x20BE68u, 0x20BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE70u;
label_20be70:
    // 0x20be70: 0xc087dfe  jal         func_21F7F8
    ctx->pc = 0x20BE70u;
    SET_GPR_U32(ctx, 31, 0x20BE78u);
    ctx->pc = 0x20BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE70u;
    // 0x20be74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F7F8u, 0x20BE70u, 0x20BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE78u;
label_20be78:
    // 0x20be78: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x20be78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20be7c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20BE7Cu;
    {
        const bool branch_taken_0x20be7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20be7c) {
            ctx->pc = 0x20BE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BE7Cu;
            // 0x20be80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BE90u;
            goto label_20be90;
        }
    }
    ctx->pc = 0x20BE84u;
    // 0x20be84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20be88: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20be88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x20be8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20be8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20be90:
    // 0x20be90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20be90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20be94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20be94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20be98: 0x3e00008  jr          $ra
    ctx->pc = 0x20BE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE98u;
        // 0x20be9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BEA0u;
}
