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

// Function: sub_0010AF20
// Address: 0x10af20 - 0x10b020
void sub_0010AF20_0x10af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AF20_0x10af20");
#endif

    switch (ctx->pc) {
        case 0x10af60u: goto label_10af60;
        case 0x10afc4u: goto label_10afc4;
        case 0x10afccu: goto label_10afcc;
        default: break;
    }

    ctx->pc = 0x10af20u;

    // 0x10af20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10af24: 0x2484118f  addiu       $a0, $a0, 0x118F
    ctx->pc = 0x10af24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4495));
    // 0x10af28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10af28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10af2c: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x10af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x10af30: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x10af30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x10af34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10af38: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x10af38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af3c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x10af3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af40: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10AF40u;
    {
        const bool branch_taken_0x10af40 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x10AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF40u;
        // 0x10af44: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af40) {
            ctx->pc = 0x10AFBCu;
            goto label_10afbc;
        }
    }
    ctx->pc = 0x10AF48u;
    // 0x10af48: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x10af48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x10af4c: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x10af4cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x10af50: 0x3529ff40  ori         $t1, $t1, 0xFF40
    ctx->pc = 0x10af50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65344);
    // 0x10af54: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x10af54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x10af58: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x10af58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10af5c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x10af5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10af60:
    // 0x10af60: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x10af60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x10af64: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x10af64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af68: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x10af68u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x10af6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10af6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af70: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x10af70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x10af74: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x10af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x10af78: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x10af78u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10af7c: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x10af7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x10af80: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x10af80u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x10af84: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x10af84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x10af88: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x10af88u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
    // 0x10af8c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x10af8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x10af90: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x10af90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10af94: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x10af94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x10af98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10af98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10af9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10af9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10afa0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x10afa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x10afa4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x10afa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x10afa8: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x10afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x10afac: 0xf  sync
    ctx->pc = 0x10afacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10afb0: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x10afb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x10afb4: 0x1d00ffea  bgtz        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x10AFB4u;
    {
        const bool branch_taken_0x10afb4 = (GPR_S64(ctx, 8) > 0);
        ctx->pc = 0x10AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFB4u;
        // 0x10afb8: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10afb4) {
            ctx->pc = 0x10AF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10af60;
        }
    }
    ctx->pc = 0x10AFBCu;
label_10afbc:
    // 0x10afbc: 0xc043898  jal         func_10E260
    ctx->pc = 0x10AFBCu;
    SET_GPR_U32(ctx, 31, 0x10AFC4u);
    ctx->pc = 0x10AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AFBCu;
    // 0x10afc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x10AFBCu, 0x10AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AFC4u;
label_10afc4:
    // 0x10afc4: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10AFC4u;
    SET_GPR_U32(ctx, 31, 0x10AFCCu);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10AFC4u, 0x10AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AFCCu;
label_10afcc:
    // 0x10afcc: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10afccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10afd0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10afd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10afd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10afd8: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x10afd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x10afdc: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x10afdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x10afe0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10afe4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x10afe8: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10afe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10afec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10afecu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x10aff0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10aff4: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10aff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10aff8: 0x24040105  addiu       $a0, $zero, 0x105
    ctx->pc = 0x10aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x10affc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10affcu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x1000b400
    // 0x10b000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B000u;
    {
        const bool branch_taken_0x10b000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B000u;
        // 0x10b004: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b000) {
            ctx->pc = 0x10B014u;
            goto label_10b014;
        }
    }
    ctx->pc = 0x10B008u;
    // 0x10b008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b00c: 0x804603c  j           func_1180F0
    ctx->pc = 0x10B00Cu;
    ctx->pc = 0x10B010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B00Cu;
    // 0x10b010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x10B014u;
label_10b014:
    // 0x10b014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b018: 0x3e00008  jr          $ra
    ctx->pc = 0x10B018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B018u;
        // 0x10b01c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B020u;
}
