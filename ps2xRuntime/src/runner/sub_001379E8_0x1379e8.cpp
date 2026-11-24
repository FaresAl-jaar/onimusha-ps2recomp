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

// Function: sub_001379E8
// Address: 0x1379e8 - 0x137b14
void sub_001379E8_0x1379e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001379E8_0x1379e8");
#endif

    switch (ctx->pc) {
        case 0x137a24u: goto label_137a24;
        case 0x137a58u: goto label_137a58;
        case 0x137ab0u: goto label_137ab0;
        case 0x137ac4u: goto label_137ac4;
        case 0x137accu: goto label_137acc;
        case 0x137aecu: goto label_137aec;
        default: break;
    }

    ctx->pc = 0x1379e8u;

    // 0x1379e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1379e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1379ec: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1379ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1379f0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1379f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1379f4: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x1379f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x1379f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1379f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1379fc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1379fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x137a00: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x137a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x137a04: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x137a04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x137a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x137a0c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x137a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a10: 0x8ea46700  lw          $a0, 0x6700($s5)
    ctx->pc = 0x137a10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B6700u));
    // 0x137a14: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x137a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x137a18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x137a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x137a1c: 0xc043808  jal         func_10E020
    ctx->pc = 0x137A1Cu;
    SET_GPR_U32(ctx, 31, 0x137A24u);
    ctx->pc = 0x137A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A1Cu;
    // 0x137a20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x137A1Cu, 0x137A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A24u;
label_137a24:
    // 0x137a24: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x137a24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x137a28: 0xacf14340  sw          $s1, 0x4340($a3)
    ctx->pc = 0x137a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x6B4340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4340u, _value); } while (0);
    // 0x137a2c: 0x24f24340  addiu       $s2, $a3, 0x4340
    ctx->pc = 0x137a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 17216));
    // 0x137a30: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x137a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6B4344u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4344u, _value); } while (0);
    // 0x137a34: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x137a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x137a38: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x137a38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4348u, _value); } while (0);
    // 0x137a3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x137a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x137a40: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x137A40u;
    {
        const bool branch_taken_0x137a40 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x137A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A40u;
        // 0x137a44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a40) {
            ctx->pc = 0x137A80u;
            goto label_137a80;
        }
    }
    ctx->pc = 0x137A48u;
    // 0x137a48: 0x2646000c  addiu       $a2, $s2, 0xC
    ctx->pc = 0x137a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x137a4c: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x137a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x137a50: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x137a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x137a54: 0x0  nop
    ctx->pc = 0x137a54u;
    // NOP
label_137a58:
    // 0x137a58: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x137a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x137a5c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x137a5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137a60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x137a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x137a64: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x137a64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x137a68: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x137a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x137a6c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x137a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137a70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137A70u;
    {
        const bool branch_taken_0x137a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A70u;
        // 0x137a74: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a70) {
            ctx->pc = 0x137A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137a58;
        }
    }
    ctx->pc = 0x137A78u;
    // 0x137a78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137A78u;
    {
        const bool branch_taken_0x137a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A78u;
        // 0x137a7c: 0x24e74340  addiu       $a3, $a3, 0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a78) {
            ctx->pc = 0x137A88u;
            goto label_137a88;
        }
    }
    ctx->pc = 0x137A80u;
label_137a80:
    // 0x137a80: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x137a80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x137a84: 0x24e74340  addiu       $a3, $a3, 0x4340
    ctx->pc = 0x137a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17216));
label_137a88:
    // 0x137a88: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x137a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x137a8c: 0x25044248  addiu       $a0, $t0, 0x4248
    ctx->pc = 0x137a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16968));
    // 0x137a90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x137a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x137a94: 0x34a51319  ori         $a1, $a1, 0x1319
    ctx->pc = 0x137a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4889);
    // 0x137a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a9c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x137a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137aa0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x137aa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137aa4: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x137aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137aa8: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x137AA8u;
    SET_GPR_U32(ctx, 31, 0x137AB0u);
    ctx->pc = 0x137AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AA8u;
    // 0x137aac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x137AA8u, 0x137AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AB0u;
label_137ab0:
    // 0x137ab0: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x137AB0u;
    {
        const bool branch_taken_0x137ab0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x137ab0) {
            ctx->pc = 0x137AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137AB0u;
            // 0x137ab4: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137AD4u;
            goto label_137ad4;
        }
    }
    ctx->pc = 0x137AB8u;
    // 0x137ab8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x137abc: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x137ABCu;
    SET_GPR_U32(ctx, 31, 0x137AC4u);
    ctx->pc = 0x137AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137ABCu;
    // 0x137ac0: 0x248447e8  addiu       $a0, $a0, 0x47E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x137ABCu, 0x137AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AC4u;
label_137ac4:
    // 0x137ac4: 0xc043800  jal         func_10E000
    ctx->pc = 0x137AC4u;
    SET_GPR_U32(ctx, 31, 0x137ACCu);
    ctx->pc = 0x137AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AC4u;
    // 0x137ac8: 0x8ea46700  lw          $a0, 0x6700($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x137AC4u, 0x137ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137ACCu;
label_137acc:
    // 0x137acc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x137ACCu;
    {
        const bool branch_taken_0x137acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137ACCu;
        // 0x137ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137acc) {
            ctx->pc = 0x137AF0u;
            goto label_137af0;
        }
    }
    ctx->pc = 0x137AD4u;
label_137ad4:
    // 0x137ad4: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137AD4u;
    {
        const bool branch_taken_0x137ad4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x137ad4) {
            ctx->pc = 0x137AE4u;
            goto label_137ae4;
        }
    }
    ctx->pc = 0x137ADCu;
    // 0x137adc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x137adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x137ae0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x137ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_137ae4:
    // 0x137ae4: 0xc043800  jal         func_10E000
    ctx->pc = 0x137AE4u;
    SET_GPR_U32(ctx, 31, 0x137AECu);
    ctx->pc = 0x137AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AE4u;
    // 0x137ae8: 0x8ea46700  lw          $a0, 0x6700($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x137AE4u, 0x137AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AECu;
label_137aec:
    // 0x137aec: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x137aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_137af0:
    // 0x137af0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x137af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137af4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x137af4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137af8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x137af8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137afc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x137afcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137b00: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x137b00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137b04: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x137b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137b08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x137B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B0Cu;
        // 0x137b10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137B14u;
}
