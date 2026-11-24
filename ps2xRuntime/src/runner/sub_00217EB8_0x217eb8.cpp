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

// Function: sub_00217EB8
// Address: 0x217eb8 - 0x217f98
void sub_00217EB8_0x217eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217EB8_0x217eb8");
#endif

    switch (ctx->pc) {
        case 0x217ee4u: goto label_217ee4;
        case 0x217f18u: goto label_217f18;
        case 0x217f60u: goto label_217f60;
        default: break;
    }

    ctx->pc = 0x217eb8u;

    // 0x217eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217ebc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x217ec0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x217ec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ec4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x217ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x217ec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217ecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217ed0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x217ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ed4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217ed8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x217ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x217edc: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x217EDCu;
    SET_GPR_U32(ctx, 31, 0x217EE4u);
    ctx->pc = 0x217EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EDCu;
    // 0x217ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x217EDCu, 0x217EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EE4u;
label_217ee4:
    // 0x217ee4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x217EE4u;
    {
        const bool branch_taken_0x217ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EE4u;
        // 0x217ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ee4) {
            ctx->pc = 0x217F7Cu;
            goto label_217f7c;
        }
    }
    ctx->pc = 0x217EECu;
    // 0x217eec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x217eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x217ef0: 0x26120950  addiu       $s2, $s0, 0x950
    ctx->pc = 0x217ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x217ef4: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x217EF4u;
    {
        const bool branch_taken_0x217ef4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x217EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EF4u;
        // 0x217ef8: 0x2604090c  addiu       $a0, $s0, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ef4) {
            ctx->pc = 0x217F38u;
            goto label_217f38;
        }
    }
    ctx->pc = 0x217EFCu;
    // 0x217efc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x217efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x217f00: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x217f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x217f04: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x217f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x217f08: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x217f08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x217f0c: 0x3012  mflo        $a2
    ctx->pc = 0x217f0cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x217f10: 0xc07f742  jal         func_1FDD08
    ctx->pc = 0x217F10u;
    SET_GPR_U32(ctx, 31, 0x217F18u);
    ctx->pc = 0x217F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F10u;
    // 0x217f14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD08u, 0x217F10u, 0x217F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F18u;
label_217f18:
    // 0x217f18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x217f18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f1c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x217F1Cu;
    {
        const bool branch_taken_0x217f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F1Cu;
        // 0x217f20: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f1c) {
            ctx->pc = 0x217F7Cu;
            goto label_217f7c;
        }
    }
    ctx->pc = 0x217F24u;
    // 0x217f24: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x217f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x217f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x217f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x217f2c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x217F2Cu;
    {
        const bool branch_taken_0x217f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F2Cu;
        // 0x217f30: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f2c) {
            ctx->pc = 0x217F78u;
            goto label_217f78;
        }
    }
    ctx->pc = 0x217F34u;
    // 0x217f34: 0x0  nop
    ctx->pc = 0x217f34u;
    // NOP
label_217f38:
    // 0x217f38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x217f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217f3c: 0x1662000e  bne         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x217F3Cu;
    {
        const bool branch_taken_0x217f3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x217F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F3Cu;
        // 0x217f40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f3c) {
            ctx->pc = 0x217F78u;
            goto label_217f78;
        }
    }
    ctx->pc = 0x217F44u;
    // 0x217f44: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x217f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x217f48: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x217f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x217f4c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x217f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x217f50: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x217f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x217f54: 0x3012  mflo        $a2
    ctx->pc = 0x217f54u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x217f58: 0xc07f86c  jal         func_1FE1B0
    ctx->pc = 0x217F58u;
    SET_GPR_U32(ctx, 31, 0x217F60u);
    ctx->pc = 0x217F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F58u;
    // 0x217f5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1B0u, 0x217F58u, 0x217F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F60u;
label_217f60:
    // 0x217f60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x217f60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f64: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x217F64u;
    {
        const bool branch_taken_0x217f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F64u;
        // 0x217f68: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f64) {
            ctx->pc = 0x217F7Cu;
            goto label_217f7c;
        }
    }
    ctx->pc = 0x217F6Cu;
    // 0x217f6c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x217f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x217f70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x217f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x217f74: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x217f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_217f78:
    // 0x217f78: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x217f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_217f7c:
    // 0x217f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217f80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217f84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217f84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217f88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217f8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x217f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217f90: 0x3e00008  jr          $ra
    ctx->pc = 0x217F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F90u;
        // 0x217f94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217F98u;
}
