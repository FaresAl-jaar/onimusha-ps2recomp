#include <cstdio>
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

// Function: sub_00237E58
// Address: 0x237e58 - 0x238100
void sub_00237E58_0x237e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237E58_0x237e58");
#endif

    switch (ctx->pc) {
        case 0x237ec0u: goto label_237ec0;
        case 0x237ec8u: goto label_237ec8;
        case 0x237ed4u: goto label_237ed4;
        case 0x237edcu: goto label_237edc;
        case 0x237f04u: goto label_237f04;
        case 0x237f20u: goto label_237f20;
        case 0x237f38u: goto label_237f38;
        case 0x237f78u: goto label_237f78;
        case 0x237fa4u: goto label_237fa4;
        case 0x237facu: goto label_237fac;
        case 0x237fc4u: goto label_237fc4;
        case 0x237fd8u: goto label_237fd8;
        case 0x238038u: goto label_238038;
        case 0x238044u: goto label_238044;
        case 0x238060u: goto label_238060;
        case 0x238074u: goto label_238074;
        case 0x238090u: goto label_238090;
        default: break;
    }

    ctx->pc = 0x237e58u;

    // 0x237e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237e60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x237e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237e68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x237e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x237e6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x237e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x237e70: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x237e70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x237e74: 0x5440008b  bnel        $v0, $zero, . + 4 + (0x8B << 2)
    ctx->pc = 0x237E74u;
    {
        const bool branch_taken_0x237e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237e74) {
            ctx->pc = 0x237E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237E74u;
            // 0x237e78: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2380A4u;
            goto label_2380a4;
        }
    }
    ctx->pc = 0x237E7Cu;
    // 0x237e7c: 0x82030048  lb          $v1, 0x48($s0)
    ctx->pc = 0x237e7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x237e80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237e84: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x237E84u;
    {
        const bool branch_taken_0x237e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x237e84) {
            ctx->pc = 0x237E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237E84u;
            // 0x237e88: 0x82030046  lb          $v1, 0x46($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237EA4u;
            goto label_237ea4;
        }
    }
    ctx->pc = 0x237E8Cu;
    // 0x237e8c: 0x82020047  lb          $v0, 0x47($s0)
    ctx->pc = 0x237e8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x237e90: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x237E90u;
    {
        const bool branch_taken_0x237e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E90u;
        // 0x237e94: 0xa2000048  sb          $zero, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e90) {
            ctx->pc = 0x237E9Cu;
            goto label_237e9c;
        }
    }
    ctx->pc = 0x237E98u;
    // 0x237e98: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x237e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_237e9c:
    // 0x237e9c: 0x82030046  lb          $v1, 0x46($s0)
    ctx->pc = 0x237e9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x237ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237ea4:
    // 0x237ea4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x237EA4u;
    {
        const bool branch_taken_0x237ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x237ea4) {
            ctx->pc = 0x237ED4u;
            goto label_237ed4;
        }
    }
    ctx->pc = 0x237EACu;
    // 0x237eac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x237eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x237eb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237EB0u;
    {
        const bool branch_taken_0x237eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237eb0) {
            ctx->pc = 0x237EC0u;
            goto label_237ec0;
        }
    }
    ctx->pc = 0x237EB8u;
    // 0x237eb8: 0xc09102a  jal         func_2440A8
    ctx->pc = 0x237EB8u;
    SET_GPR_U32(ctx, 31, 0x237EC0u);
    ctx->pc = 0x237EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EB8u;
    // 0x237ebc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2440A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440A8u, 0x237EB8u, 0x237EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EC0u;
label_237ec0:
    // 0x237ec0: 0xc08e2aa  jal         func_238AA8
    ctx->pc = 0x237EC0u;
    SET_GPR_U32(ctx, 31, 0x237EC8u);
    ctx->pc = 0x238AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AA8u, 0x237EC0u, 0x237EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EC8u;
label_237ec8:
    // 0x237ec8: 0xa2000046  sb          $zero, 0x46($s0)
    ctx->pc = 0x237ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x237ecc: 0xc08e2b0  jal         func_238AC0
    ctx->pc = 0x237ECCu;
    SET_GPR_U32(ctx, 31, 0x237ED4u);
    ctx->pc = 0x237ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237ECCu;
    // 0x237ed0: 0xa2000049  sb          $zero, 0x49($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AC0u, 0x237ECCu, 0x237ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237ED4u;
label_237ed4:
    // 0x237ed4: 0xc08e2aa  jal         func_238AA8
    ctx->pc = 0x237ED4u;
    SET_GPR_U32(ctx, 31, 0x237EDCu);
    ctx->pc = 0x237ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237ED4u;
    // 0x237ed8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AA8u, 0x237ED4u, 0x237EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EDCu;
label_237edc:
    // 0x237edc: 0x82040045  lb          $a0, 0x45($s0)
    ctx->pc = 0x237edcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x237ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237ee4: 0x14820068  bne         $a0, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x237EE4u;
    {
        const bool branch_taken_0x237ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x237ee4) {
            ctx->pc = 0x238088u;
            goto label_238088;
        }
    }
    ctx->pc = 0x237EECu;
    // 0x237eec: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x237eecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x237ef0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x237EF0u;
    {
        const bool branch_taken_0x237ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EF0u;
        // 0x237ef4: 0x92030049  lbu         $v1, 0x49($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ef0) {
            ctx->pc = 0x237F54u;
            goto label_237f54;
        }
    }
    ctx->pc = 0x237EF8u;
    // 0x237ef8: 0xa2040049  sb          $a0, 0x49($s0)
    ctx->pc = 0x237ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x237efc: 0xc08e2b0  jal         func_238AC0
    ctx->pc = 0x237EFCu;
    SET_GPR_U32(ctx, 31, 0x237F04u);
    ctx->pc = 0x237F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EFCu;
    // 0x237f00: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AC0u, 0x237EFCu, 0x237F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F04u;
label_237f04:
    // 0x237f04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x237f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x237f08: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x237F08u;
    {
        const bool branch_taken_0x237f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237f08) {
            ctx->pc = 0x237F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237F08u;
            // 0x237f0c: 0x92030049  lbu         $v1, 0x49($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237F54u;
            goto label_237f54;
        }
    }
    ctx->pc = 0x237F10u;
    // 0x237f10: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x237f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x237f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f18: 0xc090f56  jal         func_243D58
    ctx->pc = 0x237F18u;
    SET_GPR_U32(ctx, 31, 0x237F20u);
    ctx->pc = 0x237F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F18u;
    // 0x237f1c: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243D58u, 0x237F18u, 0x237F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F20u;
label_237f20:
    // 0x237f20: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x237F20u;
    {
        const bool branch_taken_0x237f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F20u;
        // 0x237f24: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f20) {
            ctx->pc = 0x237F50u;
            goto label_237f50;
        }
    }
    ctx->pc = 0x237F28u;
    // 0x237f28: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x237f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x237f2c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x237f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x237f30: 0xc08bac2  jal         func_22EB08
    ctx->pc = 0x237F30u;
    SET_GPR_U32(ctx, 31, 0x237F38u);
    ctx->pc = 0x237F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F30u;
    // 0x237f34: 0x2484af00  addiu       $a0, $a0, -0x5100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB08u, 0x237F30u, 0x237F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F38u;
label_237f38:
    // 0x237f38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x237f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237f3c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x237f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x237f40: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x237f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x237f44: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x237F44u;
    {
        const bool branch_taken_0x237f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F44u;
        // 0x237f48: 0xa2000049  sb          $zero, 0x49($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f44) {
            ctx->pc = 0x2380E8u;
            goto label_2380e8;
        }
    }
    ctx->pc = 0x237F4Cu;
    // 0x237f4c: 0x0  nop
    ctx->pc = 0x237f4cu;
    // NOP
label_237f50:
    // 0x237f50: 0x92030049  lbu         $v1, 0x49($s0)
    ctx->pc = 0x237f50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
label_237f54:
    // 0x237f54: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x237f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x237f58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x237f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237f5c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x237f5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x237f60: 0x5443004c  bnel        $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x237F60u;
    {
        const bool branch_taken_0x237f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x237f60) {
            ctx->pc = 0x237F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237F60u;
            // 0x237f64: 0x82030047  lb          $v1, 0x47($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238094u;
            goto label_238094;
        }
    }
    ctx->pc = 0x237F68u;
    // 0x237f68: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x237F68u;
    {
        const bool branch_taken_0x237f68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x237f68) {
            ctx->pc = 0x237F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237F68u;
            // 0x237f6c: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237F7Cu;
            goto label_237f7c;
        }
    }
    ctx->pc = 0x237F70u;
    // 0x237f70: 0xc08e2b0  jal         func_238AC0
    ctx->pc = 0x237F70u;
    SET_GPR_U32(ctx, 31, 0x237F78u);
    ctx->pc = 0x238AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AC0u, 0x237F70u, 0x237F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F78u;
label_237f78:
    // 0x237f78: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x237f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_237f7c:
    // 0x237f7c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x237f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x237f80: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x237f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x237f84: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x237f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    { static uint64_t last[6]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[6]={(uint64_t)(GPR_U32(ctx,16)),(uint64_t)(READ32(GPR_U32(ctx,16)+0x44)),(uint64_t)(READ8(GPR_U32(ctx,16)+0x45)),(uint64_t)(READ8(GPR_U32(ctx,16)+0x49)),(uint64_t)(READ8(GPR_U32(ctx,16)+1)),(uint64_t)(READ32(GPR_U32(ctx,16)+8)),}; bool chg=first; for(int i=0;i<6;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<40) { ++lines; first=false; for(int i=0;i<6;++i) last[i]=cur[i]; fprintf(stderr,"[px stm44] hit=%u " "s0=0x%llx v44=0x%llx f45=%llu f49=%llu f1=%llu h8=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3],(unsigned long long)cur[4],(unsigned long long)cur[5]); } }
    // 0x237f88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x237f8c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x237f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x237f90: 0x10440055  beq         $v0, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x237F90u;
    {
        const bool branch_taken_0x237f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x237F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F90u;
        // 0x237f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f90) {
            ctx->pc = 0x2380E8u;
            goto label_2380e8;
        }
    }
    ctx->pc = 0x237F98u;
    // 0x237f98: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x237f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x237f9c: 0xc091062  jal         func_244188
    ctx->pc = 0x237F9Cu;
    SET_GPR_U32(ctx, 31, 0x237FA4u);
    ctx->pc = 0x237FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F9Cu;
    // 0x237fa0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244188u, 0x237F9Cu, 0x237FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FA4u;
label_237fa4:
    // 0x237fa4: 0xc091048  jal         func_244120
    ctx->pc = 0x237FA4u;
    SET_GPR_U32(ctx, 31, 0x237FACu);
    ctx->pc = 0x237FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FA4u;
    // 0x237fa8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244120u, 0x237FA4u, 0x237FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FACu;
label_237fac:
    // 0x237fac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x237facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fb0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x237fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x237fb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237FB4u;
    {
        const bool branch_taken_0x237fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FB4u;
        // 0x237fb8: 0x1192c0  sll         $s2, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fb4) {
            ctx->pc = 0x237FC8u;
            goto label_237fc8;
        }
    }
    ctx->pc = 0x237FBCu;
    // 0x237fbc: 0xc091112  jal         func_244448
    ctx->pc = 0x237FBCu;
    SET_GPR_U32(ctx, 31, 0x237FC4u);
    ctx->pc = 0x237FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FBCu;
    // 0x237fc0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244448u, 0x237FBCu, 0x237FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FC4u;
label_237fc4:
    // 0x237fc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x237fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237fc8:
    // 0x237fc8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x237fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x237fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fd0: 0xc091062  jal         func_244188
    ctx->pc = 0x237FD0u;
    SET_GPR_U32(ctx, 31, 0x237FD8u);
    ctx->pc = 0x237FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FD0u;
    // 0x237fd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244188u, 0x237FD0u, 0x237FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FD8u;
label_237fd8:
    // 0x237fd8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x237fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x237fdc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x237fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x237fe0: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x237fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x237fe4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237FE4u;
    {
        const bool branch_taken_0x237fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x237fe4) {
            ctx->pc = 0x237FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237FE4u;
            // 0x237fe8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237FF8u;
            goto label_237ff8;
        }
    }
    ctx->pc = 0x237FECu;
    // 0x237fec: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x237fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x237ff0: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x237ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x237ff4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x237ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_237ff8:
    // 0x237ff8: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x237ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x237ffc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x237FFCu;
    {
        const bool branch_taken_0x237ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237ffc) {
            ctx->pc = 0x238000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237FFCu;
            // 0x238000: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238010u;
            goto label_238010;
        }
    }
    ctx->pc = 0x238004u;
    // 0x238004: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x238004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x238008: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x238008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23800c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x23800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_238010:
    // 0x238010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x238010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238014: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x238014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x238018: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238018u;
    {
        const bool branch_taken_0x238018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238018u;
        // 0x23801c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238018) {
            ctx->pc = 0x238030u;
            goto label_238030;
        }
    }
    ctx->pc = 0x238020u;
    // 0x238020: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x238020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x238024: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x238024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x238028: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x238028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x23802c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x23802cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_238030:
    // 0x238030: 0xc08dd94  jal         func_237650
    ctx->pc = 0x238030u;
    SET_GPR_U32(ctx, 31, 0x238038u);
    ctx->pc = 0x238034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238030u;
    // 0x238034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237650u, 0x238030u, 0x238038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238038u;
label_238038:
    // 0x238038: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x238038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x23803c: 0xc0910f8  jal         func_2443E0
    ctx->pc = 0x23803Cu;
    SET_GPR_U32(ctx, 31, 0x238044u);
    ctx->pc = 0x238040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23803Cu;
    // 0x238040: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2443E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2443E0u, 0x23803Cu, 0x238044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238044u;
label_238044:
    // 0x238044: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x238044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x238048: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x238048u;
    {
        const bool branch_taken_0x238048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x238048) {
            ctx->pc = 0x23804Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238048u;
            // 0x23804c: 0x82030047  lb          $v1, 0x47($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238094u;
            goto label_238094;
        }
    }
    ctx->pc = 0x238050u;
    // 0x238050: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x238050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x238054: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x238054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x238058: 0xc08bac2  jal         func_22EB08
    ctx->pc = 0x238058u;
    SET_GPR_U32(ctx, 31, 0x238060u);
    ctx->pc = 0x23805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238058u;
    // 0x23805c: 0x2484af30  addiu       $a0, $a0, -0x50D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB08u, 0x238058u, 0x238060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238060u;
label_238060:
    // 0x238060: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x238060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x238064: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238064u;
    {
        const bool branch_taken_0x238064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x238068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238064u;
        // 0x238068: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238064) {
            ctx->pc = 0x238078u;
            goto label_238078;
        }
    }
    ctx->pc = 0x23806Cu;
    // 0x23806c: 0xc09102a  jal         func_2440A8
    ctx->pc = 0x23806Cu;
    SET_GPR_U32(ctx, 31, 0x238074u);
    ctx->pc = 0x238070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23806Cu;
    // 0x238070: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2440A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440A8u, 0x23806Cu, 0x238074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238074u;
label_238074:
    // 0x238074: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x238074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_238078:
    // 0x238078: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x238078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x23807c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x23807cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x238080: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x238080u;
    {
        const bool branch_taken_0x238080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238080u;
        // 0x238084: 0xa2000049  sb          $zero, 0x49($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238080) {
            ctx->pc = 0x2380E8u;
            goto label_2380e8;
        }
    }
    ctx->pc = 0x238088u;
label_238088:
    // 0x238088: 0xc08e2b0  jal         func_238AC0
    ctx->pc = 0x238088u;
    SET_GPR_U32(ctx, 31, 0x238090u);
    ctx->pc = 0x238AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AC0u, 0x238088u, 0x238090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238090u;
label_238090:
    // 0x238090: 0x82030047  lb          $v1, 0x47($s0)
    ctx->pc = 0x238090u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
label_238094:
    // 0x238094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238098: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x238098u;
    {
        const bool branch_taken_0x238098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x238098) {
            ctx->pc = 0x23809Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238098u;
            // 0x23809c: 0xa2000047  sb          $zero, 0x47($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2380A0u;
            goto label_2380a0;
        }
    }
    ctx->pc = 0x2380A0u;
label_2380a0:
    // 0x2380a0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x2380a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_2380a4:
    // 0x2380a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2380a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2380a8: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2380A8u;
    {
        const bool branch_taken_0x2380a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2380a8) {
            ctx->pc = 0x2380ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2380A8u;
            // 0x2380ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2380ECu;
            goto label_2380ec;
        }
    }
    ctx->pc = 0x2380B0u;
    // 0x2380b0: 0x82030049  lb          $v1, 0x49($s0)
    ctx->pc = 0x2380b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x2380b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2380b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2380b8: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2380B8u;
    {
        const bool branch_taken_0x2380b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2380b8) {
            ctx->pc = 0x2380BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2380B8u;
            // 0x2380bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2380ECu;
            goto label_2380ec;
        }
    }
    ctx->pc = 0x2380C0u;
    // 0x2380c0: 0x82020045  lb          $v0, 0x45($s0)
    ctx->pc = 0x2380c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x2380c4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2380C4u;
    {
        const bool branch_taken_0x2380c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2380c4) {
            ctx->pc = 0x2380C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2380C4u;
            // 0x2380c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2380ECu;
            goto label_2380ec;
        }
    }
    ctx->pc = 0x2380CCu;
    // 0x2380cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2380ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2380d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2380d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2380d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2380d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2380d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2380dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2380dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2380e0: 0x808de8c  j           func_237A30
    ctx->pc = 0x2380E0u;
    ctx->pc = 0x2380E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380E0u;
    // 0x2380e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237A30u;
    sub_00237A30_0x237a30(rdram, ctx, runtime); return;
    ctx->pc = 0x2380E8u;
label_2380e8:
    // 0x2380e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2380e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2380ec:
    // 0x2380ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2380ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2380f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2380f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2380f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2380f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2380f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2380F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2380FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380F8u;
        // 0x2380fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2380F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238100u;
}
