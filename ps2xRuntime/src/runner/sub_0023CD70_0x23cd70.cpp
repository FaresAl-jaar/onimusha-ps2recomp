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

// Function: sub_0023CD70
// Address: 0x23cd70 - 0x23ce28
void sub_0023CD70_0x23cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CD70_0x23cd70");
#endif

    switch (ctx->pc) {
        case 0x23cd9cu: goto label_23cd9c;
        case 0x23cda8u: goto label_23cda8;
        case 0x23cdb4u: goto label_23cdb4;
        case 0x23cdc0u: goto label_23cdc0;
        case 0x23cdd0u: goto label_23cdd0;
        case 0x23cde0u: goto label_23cde0;
        case 0x23cdecu: goto label_23cdec;
        case 0x23cdf8u: goto label_23cdf8;
        default: break;
    }

    ctx->pc = 0x23cd70u;

    // 0x23cd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23cd74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23cd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cd78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23cd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23cd7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23cd7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23cd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23cd84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23cd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23cd88: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23cd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23cd8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23cd90: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x23cd90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23cd94: 0xc08db38  jal         func_236CE0
    ctx->pc = 0x23CD94u;
    SET_GPR_U32(ctx, 31, 0x23CD9Cu);
    ctx->pc = 0x23CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD94u;
    // 0x23cd98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236CE0u, 0x23CD94u, 0x23CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD9Cu;
label_23cd9c:
    // 0x23cd9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23cd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cda0: 0xc08db3e  jal         func_236CF8
    ctx->pc = 0x23CDA0u;
    SET_GPR_U32(ctx, 31, 0x23CDA8u);
    ctx->pc = 0x23CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDA0u;
    // 0x23cda4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236CF8u, 0x23CDA0u, 0x23CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDA8u;
label_23cda8:
    // 0x23cda8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdac: 0xc08db4a  jal         func_236D28
    ctx->pc = 0x23CDACu;
    SET_GPR_U32(ctx, 31, 0x23CDB4u);
    ctx->pc = 0x23CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDACu;
    // 0x23cdb0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D28u, 0x23CDACu, 0x23CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDB4u;
label_23cdb4:
    // 0x23cdb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23cdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdb8: 0xc08dbac  jal         func_236EB0
    ctx->pc = 0x23CDB8u;
    SET_GPR_U32(ctx, 31, 0x23CDC0u);
    ctx->pc = 0x23CDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDB8u;
    // 0x23cdbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EB0u, 0x23CDB8u, 0x23CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDC0u;
label_23cdc0:
    // 0x23cdc0: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x23cdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x23cdc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23cdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdc8: 0xc08daf4  jal         func_236BD0
    ctx->pc = 0x23CDC8u;
    SET_GPR_U32(ctx, 31, 0x23CDD0u);
    ctx->pc = 0x23CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDC8u;
    // 0x23cdcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BD0u, 0x23CDC8u, 0x23CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDD0u;
label_23cdd0:
    // 0x23cdd0: 0xae500090  sw          $s0, 0x90($s2)
    ctx->pc = 0x23cdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    // 0x23cdd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23cdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdd8: 0xc08daf0  jal         func_236BC0
    ctx->pc = 0x23CDD8u;
    SET_GPR_U32(ctx, 31, 0x23CDE0u);
    ctx->pc = 0x23CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDD8u;
    // 0x23cddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BC0u, 0x23CDD8u, 0x23CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDE0u;
label_23cde0:
    // 0x23cde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23cde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cde4: 0xc08daf8  jal         func_236BE0
    ctx->pc = 0x23CDE4u;
    SET_GPR_U32(ctx, 31, 0x23CDECu);
    ctx->pc = 0x23CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDE4u;
    // 0x23cde8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x23CDE4u, 0x23CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDECu;
label_23cdec:
    // 0x23cdec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdf0: 0xc08daa4  jal         func_236A90
    ctx->pc = 0x23CDF0u;
    SET_GPR_U32(ctx, 31, 0x23CDF8u);
    ctx->pc = 0x23CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDF0u;
    // 0x23cdf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A90u, 0x23CDF0u, 0x23CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDF8u;
label_23cdf8:
    // 0x23cdf8: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x23cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x23cdfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23cdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23ce00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ce04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23ce04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23ce08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ce0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ce0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ce10: 0x24a5ce28  addiu       $a1, $a1, -0x31D8
    ctx->pc = 0x23ce10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954536));
    // 0x23ce14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23ce14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ce18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23ce18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ce1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23ce1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce20: 0x808daec  j           func_236BB0
    ctx->pc = 0x23CE20u;
    ctx->pc = 0x23CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE20u;
    // 0x23ce24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BB0u;
    sub_00236BB0_0x236bb0(rdram, ctx, runtime); return;
    ctx->pc = 0x23CE28u;
}
