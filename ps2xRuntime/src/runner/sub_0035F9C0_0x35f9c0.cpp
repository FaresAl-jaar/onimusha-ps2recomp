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

// Function: sub_0035F9C0
// Address: 0x35f9c0 - 0x35fb00
void sub_0035F9C0_0x35f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F9C0_0x35f9c0");
#endif

    switch (ctx->pc) {
        case 0x35fadcu: goto label_35fadc;
        case 0x35faf0u: goto label_35faf0;
        default: break;
    }

    ctx->pc = 0x35f9c0u;

    // 0x35f9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f9c4: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x35f9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x35f9c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35f9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35f9cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35f9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35f9d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35f9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9d4: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x35f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x35f9d8: 0x30836009  andi        $v1, $a0, 0x6009
    ctx->pc = 0x35f9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)24585);
    // 0x35f9dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35F9DCu;
    {
        const bool branch_taken_0x35f9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9DCu;
        // 0x35f9e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f9dc) {
            ctx->pc = 0x35FA00u;
            goto label_35fa00;
        }
    }
    ctx->pc = 0x35F9E4u;
    // 0x35f9e4: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x35f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x35f9e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F9E8u;
    {
        const bool branch_taken_0x35f9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f9e8) {
            ctx->pc = 0x35F9F8u;
            goto label_35f9f8;
        }
    }
    ctx->pc = 0x35F9F0u;
    // 0x35f9f0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x35f9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f9f4: 0x0  nop
    ctx->pc = 0x35f9f4u;
    // NOP
label_35f9f8:
    // 0x35f9f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f9fc: 0x0  nop
    ctx->pc = 0x35f9fcu;
    // NOP
label_35fa00:
    // 0x35fa00: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x35fa00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x35fa04: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x35fa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x35fa08: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35FA08u;
    {
        const bool branch_taken_0x35fa08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FA08u;
        // 0x35fa0c: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fa08) {
            ctx->pc = 0x35FA50u;
            goto label_35fa50;
        }
    }
    ctx->pc = 0x35FA10u;
    // 0x35fa10: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x35fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x35fa14: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x35fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x35fa18: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x35fa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x35fa1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35fa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35fa20: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x35FA20u;
    {
        const bool branch_taken_0x35fa20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fa20) {
            ctx->pc = 0x35FA50u;
            goto label_35fa50;
        }
    }
    ctx->pc = 0x35FA28u;
    // 0x35fa28: 0x82030006  lb          $v1, 0x6($s0)
    ctx->pc = 0x35fa28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35fa2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fa30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35fa34: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x35fa34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x35fa38: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x35fa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x35fa3c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x35fa3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x35fa40: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x35fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35fa44: 0x80631f90  lb          $v1, 0x1F90($v1)
    ctx->pc = 0x35fa44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8080)));
    // 0x35fa48: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x35fa48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x35fa4c: 0x0  nop
    ctx->pc = 0x35fa4cu;
    // NOP
label_35fa50:
    // 0x35fa50: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x35fa50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x35fa54: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x35fa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x35fa58: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35FA58u;
    {
        const bool branch_taken_0x35fa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FA58u;
        // 0x35fa5c: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fa58) {
            ctx->pc = 0x35FAA0u;
            goto label_35faa0;
        }
    }
    ctx->pc = 0x35FA60u;
    // 0x35fa60: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x35fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x35fa64: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x35fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x35fa68: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x35fa68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x35fa6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35fa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35fa70: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x35FA70u;
    {
        const bool branch_taken_0x35fa70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fa70) {
            ctx->pc = 0x35FAA0u;
            goto label_35faa0;
        }
    }
    ctx->pc = 0x35FA78u;
    // 0x35fa78: 0x82030006  lb          $v1, 0x6($s0)
    ctx->pc = 0x35fa78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35fa7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fa80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35fa84: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x35fa84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x35fa88: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x35fa88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x35fa8c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x35fa8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x35fa90: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x35fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35fa94: 0x80631f90  lb          $v1, 0x1F90($v1)
    ctx->pc = 0x35fa94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8080)));
    // 0x35fa98: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x35fa98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x35fa9c: 0x0  nop
    ctx->pc = 0x35fa9cu;
    // NOP
label_35faa0:
    // 0x35faa0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x35FAA0u;
    {
        const bool branch_taken_0x35faa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35faa0) {
            ctx->pc = 0x35FAE8u;
            goto label_35fae8;
        }
    }
    ctx->pc = 0x35FAA8u;
    // 0x35faa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35faac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35faacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35fab0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x35fab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x35fab4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x35fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x35fab8: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x35fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x35fabc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35fabcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fac0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x35fac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x35fac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35fac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35fac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35facc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35faccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fad0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x35fad0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fad4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x35FAD4u;
    SET_GPR_U32(ctx, 31, 0x35FADCu);
    ctx->pc = 0x35FAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FAD4u;
    // 0x35fad8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x35FAD4u, 0x35FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FADCu;
label_35fadc:
    // 0x35fadc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fae0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x35fae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x35fae4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x35fae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_35fae8:
    // 0x35fae8: 0xc0d8028  jal         func_3600A0
    ctx->pc = 0x35FAE8u;
    SET_GPR_U32(ctx, 31, 0x35FAF0u);
    ctx->pc = 0x35FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FAE8u;
    // 0x35faec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3600A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3600A0u, 0x35FAE8u, 0x35FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FAF0u;
label_35faf0:
    // 0x35faf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35faf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35faf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35faf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35faf8: 0x3e00008  jr          $ra
    ctx->pc = 0x35FAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FAF8u;
        // 0x35fafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FB00u;
}
