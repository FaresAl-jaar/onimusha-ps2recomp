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

// Function: sub_00204EC0
// Address: 0x204ec0 - 0x204fe8
void sub_00204EC0_0x204ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204EC0_0x204ec0");
#endif

    switch (ctx->pc) {
        case 0x204f20u: goto label_204f20;
        case 0x204f28u: goto label_204f28;
        case 0x204f44u: goto label_204f44;
        case 0x204f64u: goto label_204f64;
        case 0x204f70u: goto label_204f70;
        case 0x204f7cu: goto label_204f7c;
        case 0x204f88u: goto label_204f88;
        case 0x204f94u: goto label_204f94;
        case 0x204facu: goto label_204fac;
        default: break;
    }

    ctx->pc = 0x204ec0u;

    // 0x204ec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x204ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x204ec4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x204ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204ec8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x204ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x204ecc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x204eccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ed0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x204ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x204ed4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x204ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ed8: 0x2aa30800  slti        $v1, $s5, 0x800
    ctx->pc = 0x204ed8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x204edc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x204edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x204ee0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x204ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x204ee4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x204ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ee8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x204ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x204eec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x204eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x204ef0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x204ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x204ef4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x204ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x204ef8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x204ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x204efc: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x204EFCu;
    {
        const bool branch_taken_0x204efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EFCu;
        // 0x204f00: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204efc) {
            ctx->pc = 0x204FBCu;
            goto label_204fbc;
        }
    }
    ctx->pc = 0x204F04u;
    // 0x204f04: 0x1260002d  beqz        $s3, . + 4 + (0x2D << 2)
    ctx->pc = 0x204F04u;
    {
        const bool branch_taken_0x204f04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F04u;
        // 0x204f08: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f04) {
            ctx->pc = 0x204FBCu;
            goto label_204fbc;
        }
    }
    ctx->pc = 0x204F0Cu;
    // 0x204f0c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x204f0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204f10: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x204f10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204f14: 0x24120800  addiu       $s2, $zero, 0x800
    ctx->pc = 0x204f14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x204f18: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x204f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x204f1c: 0x0  nop
    ctx->pc = 0x204f1cu;
    // NOP
label_204f20:
    // 0x204f20: 0xc088df4  jal         func_2237D0
    ctx->pc = 0x204F20u;
    SET_GPR_U32(ctx, 31, 0x204F28u);
    ctx->pc = 0x204F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F20u;
    // 0x204f24: 0x2b22823  subu        $a1, $s5, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2237D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2237D0u, 0x204F20u, 0x204F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F28u;
label_204f28:
    // 0x204f28: 0x26520800  addiu       $s2, $s2, 0x800
    ctx->pc = 0x204f28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2048));
    // 0x204f2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x204f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x204f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f34: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x204F34u;
    {
        const bool branch_taken_0x204f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F34u;
        // 0x204f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f34) {
            ctx->pc = 0x204FACu;
            goto label_204fac;
        }
    }
    ctx->pc = 0x204F3Cu;
    // 0x204f3c: 0xc088e7a  jal         func_2239E8
    ctx->pc = 0x204F3Cu;
    SET_GPR_U32(ctx, 31, 0x204F44u);
    ctx->pc = 0x2239E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E8u, 0x204F3Cu, 0x204F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F44u;
label_204f44:
    // 0x204f44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204f44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f48: 0x14770015  bne         $v1, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x204F48u;
    {
        const bool branch_taken_0x204f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x204F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F48u;
        // 0x204f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f48) {
            ctx->pc = 0x204FA0u;
            goto label_204fa0;
        }
    }
    ctx->pc = 0x204F50u;
    // 0x204f50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x204f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204f54: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x204F54u;
    {
        const bool branch_taken_0x204f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x204f54) {
            ctx->pc = 0x204F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204F54u;
            // 0x204f58: 0xae360014  sw          $s6, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204FA4u;
            goto label_204fa4;
        }
    }
    ctx->pc = 0x204F5Cu;
    // 0x204f5c: 0xc0813a4  jal         func_204E90
    ctx->pc = 0x204F5Cu;
    SET_GPR_U32(ctx, 31, 0x204F64u);
    ctx->pc = 0x204E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204E90u, 0x204F5Cu, 0x204F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F64u;
label_204f64:
    // 0x204f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f68: 0xc08140a  jal         func_205028
    ctx->pc = 0x204F68u;
    SET_GPR_U32(ctx, 31, 0x204F70u);
    ctx->pc = 0x204F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F68u;
    // 0x204f6c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205028u, 0x204F68u, 0x204F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F70u;
label_204f70:
    // 0x204f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f74: 0xc081432  jal         func_2050C8
    ctx->pc = 0x204F74u;
    SET_GPR_U32(ctx, 31, 0x204F7Cu);
    ctx->pc = 0x204F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F74u;
    // 0x204f78: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050C8u, 0x204F74u, 0x204F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F7Cu;
label_204f7c:
    // 0x204f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f80: 0xc081426  jal         func_205098
    ctx->pc = 0x204F80u;
    SET_GPR_U32(ctx, 31, 0x204F88u);
    ctx->pc = 0x204F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F80u;
    // 0x204f84: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205098u, 0x204F80u, 0x204F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F88u;
label_204f88:
    // 0x204f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f8c: 0xc088e26  jal         func_223898
    ctx->pc = 0x204F8Cu;
    SET_GPR_U32(ctx, 31, 0x204F94u);
    ctx->pc = 0x204F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F8Cu;
    // 0x204f90: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223898u, 0x204F8Cu, 0x204F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F94u;
label_204f94:
    // 0x204f94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204F94u;
    {
        const bool branch_taken_0x204f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F94u;
        // 0x204f98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f94) {
            ctx->pc = 0x204FC0u;
            goto label_204fc0;
        }
    }
    ctx->pc = 0x204F9Cu;
    // 0x204f9c: 0x0  nop
    ctx->pc = 0x204f9cu;
    // NOP
label_204fa0:
    // 0x204fa0: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x204fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
label_204fa4:
    // 0x204fa4: 0xc088e26  jal         func_223898
    ctx->pc = 0x204FA4u;
    SET_GPR_U32(ctx, 31, 0x204FACu);
    ctx->pc = 0x204FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204FA4u;
    // 0x204fa8: 0xae360018  sw          $s6, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223898u, 0x204FA4u, 0x204FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FACu;
label_204fac:
    // 0x204fac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x204facu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x204fb0: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x204fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x204fb4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x204FB4u;
    {
        const bool branch_taken_0x204fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FB4u;
        // 0x204fb8: 0x2722021  addu        $a0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fb4) {
            ctx->pc = 0x204F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204f20;
        }
    }
    ctx->pc = 0x204FBCu;
label_204fbc:
    // 0x204fbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x204fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_204fc0:
    // 0x204fc0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x204fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204fc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x204fc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204fc8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x204fc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x204fcc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x204fccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204fd0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x204fd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204fd4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x204fd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204fd8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x204fd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x204fdc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x204fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x204fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x204FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FE0u;
        // 0x204fe4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204FE8u;
}
