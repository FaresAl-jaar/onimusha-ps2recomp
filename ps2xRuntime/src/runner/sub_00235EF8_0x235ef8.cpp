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

// Function: sub_00235EF8
// Address: 0x235ef8 - 0x236018
void sub_00235EF8_0x235ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235EF8_0x235ef8");
#endif

    switch (ctx->pc) {
        case 0x235ef8u: goto label_235ef8;
        case 0x235efcu: goto label_235efc;
        case 0x235f00u: goto label_235f00;
        case 0x235f04u: goto label_235f04;
        case 0x235f08u: goto label_235f08;
        case 0x235f0cu: goto label_235f0c;
        case 0x235f10u: goto label_235f10;
        case 0x235f14u: goto label_235f14;
        case 0x235f18u: goto label_235f18;
        case 0x235f1cu: goto label_235f1c;
        case 0x235f20u: goto label_235f20;
        case 0x235f24u: goto label_235f24;
        case 0x235f28u: goto label_235f28;
        case 0x235f2cu: goto label_235f2c;
        case 0x235f30u: goto label_235f30;
        case 0x235f34u: goto label_235f34;
        case 0x235f38u: goto label_235f38;
        case 0x235f3cu: goto label_235f3c;
        case 0x235f40u: goto label_235f40;
        case 0x235f44u: goto label_235f44;
        case 0x235f48u: goto label_235f48;
        case 0x235f4cu: goto label_235f4c;
        case 0x235f50u: goto label_235f50;
        case 0x235f54u: goto label_235f54;
        case 0x235f58u: goto label_235f58;
        case 0x235f5cu: goto label_235f5c;
        case 0x235f60u: goto label_235f60;
        case 0x235f64u: goto label_235f64;
        case 0x235f68u: goto label_235f68;
        case 0x235f6cu: goto label_235f6c;
        case 0x235f70u: goto label_235f70;
        case 0x235f74u: goto label_235f74;
        case 0x235f78u: goto label_235f78;
        case 0x235f7cu: goto label_235f7c;
        case 0x235f80u: goto label_235f80;
        case 0x235f84u: goto label_235f84;
        case 0x235f88u: goto label_235f88;
        case 0x235f8cu: goto label_235f8c;
        case 0x235f90u: goto label_235f90;
        case 0x235f94u: goto label_235f94;
        case 0x235f98u: goto label_235f98;
        case 0x235f9cu: goto label_235f9c;
        case 0x235fa0u: goto label_235fa0;
        case 0x235fa4u: goto label_235fa4;
        case 0x235fa8u: goto label_235fa8;
        case 0x235facu: goto label_235fac;
        case 0x235fb0u: goto label_235fb0;
        case 0x235fb4u: goto label_235fb4;
        case 0x235fb8u: goto label_235fb8;
        case 0x235fbcu: goto label_235fbc;
        case 0x235fc0u: goto label_235fc0;
        case 0x235fc4u: goto label_235fc4;
        case 0x235fc8u: goto label_235fc8;
        case 0x235fccu: goto label_235fcc;
        case 0x235fd0u: goto label_235fd0;
        case 0x235fd4u: goto label_235fd4;
        case 0x235fd8u: goto label_235fd8;
        case 0x235fdcu: goto label_235fdc;
        case 0x235fe0u: goto label_235fe0;
        case 0x235fe4u: goto label_235fe4;
        case 0x235fe8u: goto label_235fe8;
        case 0x235fecu: goto label_235fec;
        case 0x235ff0u: goto label_235ff0;
        case 0x235ff4u: goto label_235ff4;
        case 0x235ff8u: goto label_235ff8;
        case 0x235ffcu: goto label_235ffc;
        case 0x236000u: goto label_236000;
        case 0x236004u: goto label_236004;
        case 0x236008u: goto label_236008;
        case 0x23600cu: goto label_23600c;
        case 0x236010u: goto label_236010;
        case 0x236014u: goto label_236014;
        default: break;
    }

    ctx->pc = 0x235ef8u;

label_235ef8:
    // 0x235ef8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x235ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_235efc:
    // 0x235efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235f00:
    // 0x235f00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235f04:
    // 0x235f04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235f08:
    // 0x235f08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x235f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235f0c:
    // 0x235f0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235f10:
    // 0x235f10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x235f10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235f14:
    // 0x235f14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_235f18:
    // 0x235f18: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x235f18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_235f1c:
    // 0x235f1c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x235f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_235f20:
    // 0x235f20: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x235f20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235f24:
    // 0x235f24: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x235f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_235f28:
    // 0x235f28: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x235f28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_235f2c:
    // 0x235f2c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_235f30:
    // 0x235f30: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x235f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_235f34:
    // 0x235f34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x235f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_235f38:
    // 0x235f38: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x235f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_235f3c:
    // 0x235f3c: 0x10000008  b           . + 4 + (0x8 << 2)
label_235f40:
    if (ctx->pc == 0x235F40u) {
        ctx->pc = 0x235F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F3Cu;
        // 0x235f40: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F44u;
        goto label_235f44;
    }
    ctx->pc = 0x235F3Cu;
    {
        const bool branch_taken_0x235f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F3Cu;
        // 0x235f40: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f3c) {
            ctx->pc = 0x235F60u;
            goto label_235f60;
        }
    }
    ctx->pc = 0x235F44u;
label_235f44:
    // 0x235f44: 0x0  nop
    ctx->pc = 0x235f44u;
    // NOP
label_235f48:
    // 0x235f48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x235f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235f4c:
    // 0x235f4c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x235f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_235f50:
    // 0x235f50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_235f54:
    // 0x235f54: 0x8c680018  lw          $t0, 0x18($v1)
    ctx->pc = 0x235f54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_235f58:
    // 0x235f58: 0x100f809  jalr        $t0
label_235f5c:
    if (ctx->pc == 0x235F5Cu) {
        ctx->pc = 0x235F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F58u;
        // 0x235f5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F60u;
        goto label_235f60;
    }
    ctx->pc = 0x235F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x235F60u);
        ctx->pc = 0x235F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F58u;
        // 0x235f5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235F58u, 0x235F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235F60u;
label_235f60:
    // 0x235f60: 0xc08aeea  jal         func_22BBA8
label_235f64:
    if (ctx->pc == 0x235F64u) {
        ctx->pc = 0x235F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F60u;
        // 0x235f64: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F68u;
        goto label_235f68;
    }
    ctx->pc = 0x235F60u;
    SET_GPR_U32(ctx, 31, 0x235F68u);
    ctx->pc = 0x235F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F60u;
    // 0x235f64: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BBA8u, 0x235F60u, 0x235F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F68u;
label_235f68:
    // 0x235f68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235f6c:
    // 0x235f6c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x235f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_235f70:
    // 0x235f70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x235f70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_235f74:
    // 0x235f74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x235f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235f78:
    // 0x235f78: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x235f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_235f7c:
    // 0x235f7c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_235f80:
    if (ctx->pc == 0x235F80u) {
        ctx->pc = 0x235F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F7Cu;
        // 0x235f80: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F84u;
        goto label_235f84;
    }
    ctx->pc = 0x235F7Cu;
    {
        const bool branch_taken_0x235f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F7Cu;
        // 0x235f80: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f7c) {
            ctx->pc = 0x235F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235f48;
        }
    }
    ctx->pc = 0x235F84u;
label_235f84:
    // 0x235f84: 0xc0944c2  jal         func_251308
label_235f88:
    if (ctx->pc == 0x235F88u) {
        ctx->pc = 0x235F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F84u;
        // 0x235f88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F8Cu;
        goto label_235f8c;
    }
    ctx->pc = 0x235F84u;
    SET_GPR_U32(ctx, 31, 0x235F8Cu);
    ctx->pc = 0x235F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F84u;
    // 0x235f88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251308u, 0x235F84u, 0x235F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F8Cu;
label_235f8c:
    // 0x235f8c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x235f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_235f90:
    // 0x235f90: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x235f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_235f94:
    // 0x235f94: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x235f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_235f98:
    // 0x235f98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x235f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_235f9c:
    // 0x235f9c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x235f9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_235fa0:
    // 0x235fa0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x235fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_235fa4:
    // 0x235fa4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x235fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_235fa8:
    // 0x235fa8: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x235fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_235fac:
    // 0x235fac: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x235facu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_235fb0:
    // 0x235fb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235fb4:
    // 0x235fb4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x235fb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_235fb8:
    // 0x235fb8: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x235fb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_235fbc:
    // 0x235fbc: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x235fbcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_235fc0:
    // 0x235fc0: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x235fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_235fc4:
    // 0x235fc4: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x235fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_235fc8:
    // 0x235fc8: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
label_235fcc:
    if (ctx->pc == 0x235FCCu) {
        ctx->pc = 0x235FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FC8u;
        // 0x235fcc: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FD0u;
        goto label_235fd0;
    }
    ctx->pc = 0x235FC8u;
    {
        const bool branch_taken_0x235fc8 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x235fc8) {
            ctx->pc = 0x235FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235FC8u;
            // 0x235fcc: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235FE0u;
            goto label_235fe0;
        }
    }
    ctx->pc = 0x235FD0u;
label_235fd0:
    // 0x235fd0: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x235fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_235fd4:
    // 0x235fd4: 0x10000003  b           . + 4 + (0x3 << 2)
label_235fd8:
    if (ctx->pc == 0x235FD8u) {
        ctx->pc = 0x235FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FD4u;
        // 0x235fd8: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FDCu;
        goto label_235fdc;
    }
    ctx->pc = 0x235FD4u;
    {
        const bool branch_taken_0x235fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FD4u;
        // 0x235fd8: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fd4) {
            ctx->pc = 0x235FE4u;
            goto label_235fe4;
        }
    }
    ctx->pc = 0x235FDCu;
label_235fdc:
    // 0x235fdc: 0x0  nop
    ctx->pc = 0x235fdcu;
    // NOP
label_235fe0:
    // 0x235fe0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x235fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_235fe4:
    // 0x235fe4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x235fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_235fe8:
    // 0x235fe8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x235fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_235fec:
    // 0x235fec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235ff0:
    // 0x235ff0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235ff4:
    // 0x235ff4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235ff8:
    // 0x235ff8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235ffc:
    // 0x235ffc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235ffcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236000:
    // 0x236000: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x236000u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_236004:
    // 0x236004: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x236004u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236008:
    // 0x236008: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x236008u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23600c:
    // 0x23600c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23600cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_236010:
    // 0x236010: 0x808aee4  j           func_22BB90
label_236014:
    if (ctx->pc == 0x236014u) {
        ctx->pc = 0x236014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236010u;
        // 0x236014: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236018u;
        goto label_fallthrough_0x236010;
    }
    ctx->pc = 0x236010u;
    ctx->pc = 0x236014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236010u;
    // 0x236014: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB90u;
    sub_0022BB90_0x22bb90(rdram, ctx, runtime); return;
label_fallthrough_0x236010:
    ctx->pc = 0x236018u;
}
