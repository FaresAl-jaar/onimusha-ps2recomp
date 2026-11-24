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

// Function: sub_002F6200
// Address: 0x2f6200 - 0x2f62cc
void sub_002F6200_0x2f6200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6200_0x2f6200");
#endif

    switch (ctx->pc) {
        case 0x2f6230u: goto label_2f6230;
        case 0x2f623cu: goto label_2f623c;
        case 0x2f624cu: goto label_2f624c;
        case 0x2f627cu: goto label_2f627c;
        case 0x2f629cu: goto label_2f629c;
        case 0x2f62b4u: goto label_2f62b4;
        default: break;
    }

    ctx->pc = 0x2f6200u;

    // 0x2f6200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f620c: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f620cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f6210: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F6210u;
    {
        const bool branch_taken_0x2f6210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6210u;
        // 0x2f6214: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6210) {
            ctx->pc = 0x2F6240u;
            goto label_2f6240;
        }
    }
    ctx->pc = 0x2F6218u;
    // 0x2f6218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f6218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f621c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2f621cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x2f6220: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f6220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6224: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2f6224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f6228: 0xc0d7c90  jal         func_35F240
    ctx->pc = 0x2F6228u;
    SET_GPR_U32(ctx, 31, 0x2F6230u);
    ctx->pc = 0x2F622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6228u;
    // 0x2f622c: 0x2484a100  addiu       $a0, $a0, -0x5F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F240u, 0x2F6228u, 0x2F6230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6230u;
label_2f6230:
    // 0x2f6230: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f6230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f6234: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x2F6234u;
    SET_GPR_U32(ctx, 31, 0x2F623Cu);
    ctx->pc = 0x2F6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6234u;
    // 0x2f6238: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x2F6234u, 0x2F623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F623Cu;
label_2f623c:
    // 0x2f623c: 0x0  nop
    ctx->pc = 0x2f623cu;
    // NOP
label_2f6240:
    // 0x2f6240: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2f6240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x2f6244: 0xc0d7d1c  jal         func_35F470
    ctx->pc = 0x2F6244u;
    SET_GPR_U32(ctx, 31, 0x2F624Cu);
    ctx->pc = 0x2F6248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6244u;
    // 0x2f6248: 0x2484a100  addiu       $a0, $a0, -0x5F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F470u, 0x2F6244u, 0x2F624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F624Cu;
label_2f624c:
    // 0x2f624c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F624Cu;
    {
        const bool branch_taken_0x2f624c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F624Cu;
        // 0x2f6250: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f624c) {
            ctx->pc = 0x2F62B8u;
            goto label_2f62b8;
        }
    }
    ctx->pc = 0x2F6254u;
    // 0x2f6254: 0x8022a103  lb          $v0, -0x5EFD($at)
    ctx->pc = 0x2f6254u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294942979)));
    // 0x2f6258: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F6258u;
    {
        const bool branch_taken_0x2f6258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6258) {
            ctx->pc = 0x2F62A8u;
            goto label_2f62a8;
        }
    }
    ctx->pc = 0x2F6260u;
    // 0x2f6260: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2f6260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f6264: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6264u;
    {
        const bool branch_taken_0x2f6264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6264u;
        // 0x2f6268: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6264) {
            ctx->pc = 0x2F6288u;
            goto label_2f6288;
        }
    }
    ctx->pc = 0x2F626Cu;
    // 0x2f626c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f626cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6270: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f6270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6274: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6274u;
    SET_GPR_U32(ctx, 31, 0x2F627Cu);
    ctx->pc = 0x2F6278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6274u;
    // 0x2f6278: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6274u, 0x2F627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F627Cu;
label_2f627c:
    // 0x2f627c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F627Cu;
    {
        const bool branch_taken_0x2f627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f627c) {
            ctx->pc = 0x2F62B8u;
            goto label_2f62b8;
        }
    }
    ctx->pc = 0x2F6284u;
    // 0x2f6284: 0x0  nop
    ctx->pc = 0x2f6284u;
    // NOP
label_2f6288:
    // 0x2f6288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f628c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f628cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f6290: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f6290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6294: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6294u;
    SET_GPR_U32(ctx, 31, 0x2F629Cu);
    ctx->pc = 0x2F6298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6294u;
    // 0x2f6298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6294u, 0x2F629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F629Cu;
label_2f629c:
    // 0x2f629c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F629Cu;
    {
        const bool branch_taken_0x2f629c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f629c) {
            ctx->pc = 0x2F62B8u;
            goto label_2f62b8;
        }
    }
    ctx->pc = 0x2F62A4u;
    // 0x2f62a4: 0x0  nop
    ctx->pc = 0x2f62a4u;
    // NOP
label_2f62a8:
    // 0x2f62a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f62a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62ac: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F62ACu;
    SET_GPR_U32(ctx, 31, 0x2F62B4u);
    ctx->pc = 0x2F62B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F62ACu;
    // 0x2f62b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F62ACu, 0x2F62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62B4u;
label_2f62b4:
    // 0x2f62b4: 0x0  nop
    ctx->pc = 0x2f62b4u;
    // NOP
label_2f62b8:
    // 0x2f62b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f62b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f62bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f62bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f62c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f62c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F62C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62C4u;
        // 0x2f62c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F62C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F62CCu;
}
