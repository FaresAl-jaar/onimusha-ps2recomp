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

// Function: sub_0020DB50
// Address: 0x20db50 - 0x20dc04
void sub_0020DB50_0x20db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DB50_0x20db50");
#endif

    switch (ctx->pc) {
        case 0x20db68u: goto label_20db68;
        case 0x20db90u: goto label_20db90;
        case 0x20dba0u: goto label_20dba0;
        case 0x20dbacu: goto label_20dbac;
        case 0x20dbb8u: goto label_20dbb8;
        default: break;
    }

    ctx->pc = 0x20db50u;

    // 0x20db50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20db50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20db54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20db54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20db58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20db5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20db60: 0xc083994  jal         func_20E650
    ctx->pc = 0x20DB60u;
    SET_GPR_U32(ctx, 31, 0x20DB68u);
    ctx->pc = 0x20DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DB60u;
    // 0x20db64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E650u, 0x20DB60u, 0x20DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB68u;
label_20db68:
    // 0x20db68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20db68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20db6c: 0x52200021  beql        $s1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x20DB6Cu;
    {
        const bool branch_taken_0x20db6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db6c) {
            ctx->pc = 0x20DB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB6Cu;
            // 0x20db70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DBF4u;
            goto label_20dbf4;
        }
    }
    ctx->pc = 0x20DB74u;
    // 0x20db74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20db78: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x20DB78u;
    {
        const bool branch_taken_0x20db78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20db78) {
            ctx->pc = 0x20DB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB78u;
            // 0x20db7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DBF4u;
            goto label_20dbf4;
        }
    }
    ctx->pc = 0x20DB80u;
    // 0x20db80: 0x8e022004  lw          $v0, 0x2004($s0)
    ctx->pc = 0x20db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
    // 0x20db84: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20db84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20db88: 0xc083702  jal         func_20DC08
    ctx->pc = 0x20DB88u;
    SET_GPR_U32(ctx, 31, 0x20DB90u);
    ctx->pc = 0x20DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DB88u;
    // 0x20db8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DC08u, 0x20DB88u, 0x20DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB90u;
label_20db90:
    // 0x20db90: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20DB90u;
    {
        const bool branch_taken_0x20db90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB90u;
        // 0x20db94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db90) {
            ctx->pc = 0x20DBF0u;
            goto label_20dbf0;
        }
    }
    ctx->pc = 0x20DB98u;
    // 0x20db98: 0xc08e926  jal         func_23A498
    ctx->pc = 0x20DB98u;
    SET_GPR_U32(ctx, 31, 0x20DBA0u);
    ctx->pc = 0x23A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A498u, 0x20DB98u, 0x20DBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBA0u;
label_20dba0:
    // 0x20dba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20dba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dba4: 0xc08e904  jal         func_23A410
    ctx->pc = 0x20DBA4u;
    SET_GPR_U32(ctx, 31, 0x20DBACu);
    ctx->pc = 0x20DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DBA4u;
    // 0x20dba8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A410u, 0x20DBA4u, 0x20DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBACu;
label_20dbac:
    // 0x20dbac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20dbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbb0: 0xc08e948  jal         func_23A520
    ctx->pc = 0x20DBB0u;
    SET_GPR_U32(ctx, 31, 0x20DBB8u);
    ctx->pc = 0x20DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DBB0u;
    // 0x20dbb4: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A520u, 0x20DBB0u, 0x20DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBB8u;
label_20dbb8:
    // 0x20dbb8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x20dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20dbbc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x20dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x20dbc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dbc4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x20dbc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20dbc8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x20dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x20dbcc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x20dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x20dbd0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x20dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20dbd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20dbd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20dbd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbdc: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x20dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20dbe0: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x20dbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20dbe4: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x20dbe4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x20dbe8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x20dbe8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x20dbec: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x20dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_20dbf0:
    // 0x20dbf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20dbf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20dbf4:
    // 0x20dbf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20dbf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20dbf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20dbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x20DBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBFCu;
        // 0x20dc00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DC04u;
}
