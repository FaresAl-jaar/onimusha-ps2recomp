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

// Function: sub_0010CAA8
// Address: 0x10caa8 - 0x10cc68
void sub_0010CAA8_0x10caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CAA8_0x10caa8");
#endif

    switch (ctx->pc) {
        case 0x10cb18u: goto label_10cb18;
        case 0x10cb48u: goto label_10cb48;
        case 0x10cb64u: goto label_10cb64;
        case 0x10cb6cu: goto label_10cb6c;
        case 0x10cbb4u: goto label_10cbb4;
        case 0x10cbdcu: goto label_10cbdc;
        case 0x10cbe8u: goto label_10cbe8;
        case 0x10cc18u: goto label_10cc18;
        case 0x10cc20u: goto label_10cc20;
        case 0x10cc44u: goto label_10cc44;
        case 0x10cc50u: goto label_10cc50;
        default: break;
    }

    ctx->pc = 0x10caa8u;

    // 0x10caa8: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x10caa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x10caac: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10caacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10cab0: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x10cab0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10cab4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x10cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x10cab8: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x10cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x10cabc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10cabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cac0: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x10cac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x10cac4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10cac8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x10cac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x10cacc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10caccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10cad0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10cad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10cad4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10cad8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x10cad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x10cadc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10cae0: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10CAE0u;
    {
        const bool branch_taken_0x10cae0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cae0) {
            ctx->pc = 0x10CAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CAE0u;
            // 0x10cae4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CAE8u;
            goto label_10cae8;
        }
    }
    ctx->pc = 0x10CAE8u;
label_10cae8:
    // 0x10cae8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10caec: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x10caecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x10caf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10caf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10caf4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x10caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x10caf8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x10caf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10cafc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x10cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x10cb00: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10cb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10cb04: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10cb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10cb08: 0x4012  mflo        $t0
    ctx->pc = 0x10cb08u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x10cb0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x10cb0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x10cb10: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x10cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x10cb14: 0x0  nop
    ctx->pc = 0x10cb14u;
    // NOP
label_10cb18:
    // 0x10cb18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10cb1c: 0x0  nop
    ctx->pc = 0x10cb1cu;
    // NOP
    // 0x10cb20: 0x0  nop
    ctx->pc = 0x10cb20u;
    // NOP
    // 0x10cb24: 0x0  nop
    ctx->pc = 0x10cb24u;
    // NOP
    // 0x10cb28: 0x0  nop
    ctx->pc = 0x10cb28u;
    // NOP
    // 0x10cb2c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CB2Cu;
    {
        const bool branch_taken_0x10cb2c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10cb2c) {
            ctx->pc = 0x10CB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cb18;
        }
    }
    ctx->pc = 0x10CB34u;
    // 0x10cb34: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10cb38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10cb3c: 0x24a5d140  addiu       $a1, $a1, -0x2EC0
    ctx->pc = 0x10cb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955328));
    // 0x10cb40: 0xc043740  jal         func_10DD00
    ctx->pc = 0x10CB40u;
    SET_GPR_U32(ctx, 31, 0x10CB48u);
    ctx->pc = 0x10CB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB40u;
    // 0x10cb44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD00u, 0x10CB40u, 0x10CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB48u;
label_10cb48:
    // 0x10cb48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10cb48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb4c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10cb50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cb54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10cb58: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10cb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10cb5c: 0xc043afe  jal         func_10EBF8
    ctx->pc = 0x10CB5Cu;
    SET_GPR_U32(ctx, 31, 0x10CB64u);
    ctx->pc = 0x10CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB5Cu;
    // 0x10cb60: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBF8u, 0x10CB5Cu, 0x10CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB64u;
label_10cb64:
    // 0x10cb64: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10CB64u;
    SET_GPR_U32(ctx, 31, 0x10CB6Cu);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10CB64u, 0x10CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB6Cu;
label_10cb6c:
    // 0x10cb6c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10cb70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10cb74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10cb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10cb78: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x10cb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x10cb7c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x10cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x10cb80: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10cb84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x10cb88: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x10cb88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45088);
    // 0x10cb8c: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x10cb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x10cb90: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10cb94: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10cb94u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3)); // MMIO: 0x1000b020
    // 0x10cb98: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x10cb98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x10cb9c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x10cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10cba0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10cba0u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3)); // MMIO: 0x1000b000
    // 0x10cba4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CBA4u;
    {
        const bool branch_taken_0x10cba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBA4u;
        // 0x10cba8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cba4) {
            ctx->pc = 0x10CBB8u;
            goto label_10cbb8;
        }
    }
    ctx->pc = 0x10CBACu;
    // 0x10cbac: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10CBACu;
    SET_GPR_U32(ctx, 31, 0x10CBB4u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10CBACu, 0x10CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBB4u;
label_10cbb4:
    // 0x10cbb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10cbb8:
    // 0x10cbb8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x10cbbc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10cbc0: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x10cbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x10cbc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10cbc4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x10cbc8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10cbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10cbcc: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x10cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x10cbd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10cbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbd4: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x10CBD4u;
    SET_GPR_U32(ctx, 31, 0x10CBDCu);
    ctx->pc = 0x10CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBD4u;
    // 0x10cbd8: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x10CBD4u, 0x10CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBDCu;
label_10cbdc:
    // 0x10cbdc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x10cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10cbe0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10cbe4: 0x0  nop
    ctx->pc = 0x10cbe4u;
    // NOP
label_10cbe8:
    // 0x10cbe8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cbec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10cbecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10cbf0: 0x0  nop
    ctx->pc = 0x10cbf0u;
    // NOP
    // 0x10cbf4: 0x0  nop
    ctx->pc = 0x10cbf4u;
    // NOP
    // 0x10cbf8: 0x0  nop
    ctx->pc = 0x10cbf8u;
    // NOP
    // 0x10cbfc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CBFCu;
    {
        const bool branch_taken_0x10cbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cbfc) {
            ctx->pc = 0x10CBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cbe8;
        }
    }
    ctx->pc = 0x10CC04u;
    // 0x10cc04: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CC04u;
    {
        const bool branch_taken_0x10cc04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC04u;
        // 0x10cc08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc04) {
            ctx->pc = 0x10CC18u;
            goto label_10cc18;
        }
    }
    ctx->pc = 0x10CC0Cu;
    // 0x10cc0c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x10cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x10cc10: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10CC10u;
    SET_GPR_U32(ctx, 31, 0x10CC18u);
    ctx->pc = 0x10CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC10u;
    // 0x10cc14: 0x24a52368  addiu       $a1, $a1, 0x2368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10CC10u, 0x10CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC18u;
label_10cc18:
    // 0x10cc18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cc1c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10cc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_10cc20:
    // 0x10cc20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x10cc24: 0x0  nop
    ctx->pc = 0x10cc24u;
    // NOP
    // 0x10cc28: 0x0  nop
    ctx->pc = 0x10cc28u;
    // NOP
    // 0x10cc2c: 0x0  nop
    ctx->pc = 0x10cc2cu;
    // NOP
    // 0x10cc30: 0x0  nop
    ctx->pc = 0x10cc30u;
    // NOP
    // 0x10cc34: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CC34u;
    {
        const bool branch_taken_0x10cc34 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10cc34) {
            ctx->pc = 0x10CC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cc20;
        }
    }
    ctx->pc = 0x10CC3Cu;
    // 0x10cc3c: 0xc043ae4  jal         func_10EB90
    ctx->pc = 0x10CC3Cu;
    SET_GPR_U32(ctx, 31, 0x10CC44u);
    ctx->pc = 0x10CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC3Cu;
    // 0x10cc40: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EB90u, 0x10CC3Cu, 0x10CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC44u;
label_10cc44:
    // 0x10cc44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10cc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc48: 0xc043744  jal         func_10DD10
    ctx->pc = 0x10CC48u;
    SET_GPR_U32(ctx, 31, 0x10CC50u);
    ctx->pc = 0x10CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC48u;
    // 0x10cc4c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD10u, 0x10CC48u, 0x10CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC50u;
label_10cc50:
    // 0x10cc50: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10cc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10cc54: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x10cc54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10cc58: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x10cc58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cc5c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x10cc5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10cc60: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC60u;
        // 0x10cc64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CC68u;
}
