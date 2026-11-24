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

// Function: sub_00115EB8
// Address: 0x115eb8 - 0x1160b0
void sub_00115EB8_0x115eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115EB8_0x115eb8");
#endif

    switch (ctx->pc) {
        case 0x115ef4u: goto label_115ef4;
        case 0x115f0cu: goto label_115f0c;
        case 0x115f38u: goto label_115f38;
        case 0x115fa0u: goto label_115fa0;
        case 0x115ff0u: goto label_115ff0;
        case 0x116030u: goto label_116030;
        case 0x116040u: goto label_116040;
        case 0x116048u: goto label_116048;
        case 0x11605cu: goto label_11605c;
        case 0x11606cu: goto label_11606c;
        case 0x11607cu: goto label_11607c;
        case 0x116084u: goto label_116084;
        default: break;
    }

    ctx->pc = 0x115eb8u;

    // 0x115eb8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x115eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x115ebc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x115ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x115ec0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x115ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x115ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ec8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x115ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x115ecc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x115eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ed0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x115ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115ed4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x115ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x115ed8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x115ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x115edc: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x115edcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x115ee0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x115ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x115ee4: 0x26d2ec80  addiu       $s2, $s6, -0x1380
    ctx->pc = 0x115ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962304));
    // 0x115ee8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x115ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x115eec: 0xc044b50  jal         func_112D40
    ctx->pc = 0x115EECu;
    SET_GPR_U32(ctx, 31, 0x115EF4u);
    ctx->pc = 0x115EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115EECu;
    // 0x115ef0: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x115EECu, 0x115EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EF4u;
label_115ef4:
    // 0x115ef4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x115ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x115ef8: 0x8c432b3c  lw          $v1, 0x2B3C($v0)
    ctx->pc = 0x115ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x115efc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x115EFCu;
    {
        const bool branch_taken_0x115efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115efc) {
            ctx->pc = 0x115F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115EFCu;
            // 0x115f00: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115F10u;
            goto label_115f10;
        }
    }
    ctx->pc = 0x115F04u;
    // 0x115f04: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x115F04u;
    SET_GPR_U32(ctx, 31, 0x115F0Cu);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x115F04u, 0x115F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F0Cu;
label_115f0c:
    // 0x115f0c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x115f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_115f10:
    // 0x115f10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f14: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x115f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x115f18: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x115F18u;
    {
        const bool branch_taken_0x115f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F18u;
        // 0x115f1c: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f18) {
            ctx->pc = 0x115F64u;
            goto label_115f64;
        }
    }
    ctx->pc = 0x115F20u;
    // 0x115f20: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x115f20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x115f24: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x115f24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115f28: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x115f28u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x115f2c: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x115f2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x115f30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x115f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115f34: 0x0  nop
    ctx->pc = 0x115f34u;
    // NOP
label_115f38:
    // 0x115f38: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x115f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x115f3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x115F3Cu;
    {
        const bool branch_taken_0x115f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F3Cu;
        // 0x115f40: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f3c) {
            ctx->pc = 0x115F74u;
            goto label_115f74;
        }
    }
    ctx->pc = 0x115F44u;
    // 0x115f44: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x115f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x115f48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115f4c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x115f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x115f50: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x115f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x115f54: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x115F54u;
    {
        const bool branch_taken_0x115f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115f54) {
            ctx->pc = 0x115F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115F54u;
            // 0x115f58: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115f38;
        }
    }
    ctx->pc = 0x115F5Cu;
    // 0x115f5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115F5Cu;
    {
        const bool branch_taken_0x115f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F5Cu;
        // 0x115f60: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f5c) {
            ctx->pc = 0x115F78u;
            goto label_115f78;
        }
    }
    ctx->pc = 0x115F64u;
label_115f64:
    // 0x115f64: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x115f64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x115f68: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x115f68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115f6c: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x115f6cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x115f70: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x115f70u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
label_115f74:
    // 0x115f74: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x115f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_115f78:
    // 0x115f78: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x115F78u;
    {
        const bool branch_taken_0x115f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x115f78) {
            ctx->pc = 0x115F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115F78u;
            // 0x115f7c: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115F80u;
            goto label_115f80;
        }
    }
    ctx->pc = 0x115F80u;
label_115f80:
    // 0x115f80: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x115f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x115f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f88: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x115f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x115f8c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x115F8Cu;
    {
        const bool branch_taken_0x115f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F8Cu;
        // 0x115f90: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f8c) {
            ctx->pc = 0x115FC4u;
            goto label_115fc4;
        }
    }
    ctx->pc = 0x115F94u;
    // 0x115f94: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x115f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x115f98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x115f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115f9c: 0x0  nop
    ctx->pc = 0x115f9cu;
    // NOP
label_115fa0:
    // 0x115fa0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x115fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x115fa4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115FA4u;
    {
        const bool branch_taken_0x115fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FA4u;
        // 0x115fa8: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fa4) {
            ctx->pc = 0x115FC4u;
            goto label_115fc4;
        }
    }
    ctx->pc = 0x115FACu;
    // 0x115fac: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x115facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x115fb0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115fb4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x115fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x115fb8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x115fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x115fbc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x115FBCu;
    {
        const bool branch_taken_0x115fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115fbc) {
            ctx->pc = 0x115FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115FBCu;
            // 0x115fc0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115fa0;
        }
    }
    ctx->pc = 0x115FC4u;
label_115fc4:
    // 0x115fc4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x115fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x115fc8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x115FC8u;
    {
        const bool branch_taken_0x115fc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x115fc8) {
            ctx->pc = 0x115FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115FC8u;
            // 0x115fcc: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115FD0u;
            goto label_115fd0;
        }
    }
    ctx->pc = 0x115FD0u;
label_115fd0:
    // 0x115fd0: 0x24e22900  addiu       $v0, $a3, 0x2900
    ctx->pc = 0x115fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 10496));
    // 0x115fd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115fd8: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x115fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x115fdc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x115fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115fe0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x115fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x115fe4: 0x2690f8c0  addiu       $s0, $s4, -0x740
    ctx->pc = 0x115fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965440));
    // 0x115fe8: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x115FE8u;
    SET_GPR_U32(ctx, 31, 0x115FF0u);
    ctx->pc = 0x115FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FE8u;
    // 0x115fec: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x115FE8u, 0x115FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FF0u;
label_115ff0:
    // 0x115ff0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x115ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ff4: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x115ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x115ff8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115ffc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x115ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x116000: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x116000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x116004: 0x26a40380  addiu       $a0, $s5, 0x380
    ctx->pc = 0x116004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 896));
    // 0x116008: 0x26c7ec80  addiu       $a3, $s6, -0x1380
    ctx->pc = 0x116008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962304));
    // 0x11600c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11600cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x116010: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116018: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x116018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11601c: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x11601cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x116020: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x116020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116024: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116028: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x116028u;
    SET_GPR_U32(ctx, 31, 0x116030u);
    ctx->pc = 0x11602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116028u;
    // 0x11602c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x116028u, 0x116030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116030u;
label_116030:
    // 0x116030: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116030u;
    {
        const bool branch_taken_0x116030 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x116034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116030u;
        // 0x116034: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116030) {
            ctx->pc = 0x116050u;
            goto label_116050;
        }
    }
    ctx->pc = 0x116038u;
    // 0x116038: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x116038u;
    SET_GPR_U32(ctx, 31, 0x116040u);
    ctx->pc = 0x11603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116038u;
    // 0x11603c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x116038u, 0x116040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116040u;
label_116040:
    // 0x116040: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x116040u;
    SET_GPR_U32(ctx, 31, 0x116048u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x116040u, 0x116048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116048u;
label_116048:
    // 0x116048: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x116048u;
    {
        const bool branch_taken_0x116048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116048u;
        // 0x11604c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116048) {
            ctx->pc = 0x116088u;
            goto label_116088;
        }
    }
    ctx->pc = 0x116050u;
label_116050:
    // 0x116050: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x116050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x116054: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x116054u;
    SET_GPR_U32(ctx, 31, 0x11605Cu);
    ctx->pc = 0x116058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116054u;
    // 0x116058: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x116054u, 0x11605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11605Cu;
label_11605c:
    // 0x11605c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11605Cu;
    {
        const bool branch_taken_0x11605c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11605c) {
            ctx->pc = 0x116074u;
            goto label_116074;
        }
    }
    ctx->pc = 0x116064u;
    // 0x116064: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x116064u;
    SET_GPR_U32(ctx, 31, 0x11606Cu);
    ctx->pc = 0x116068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116064u;
    // 0x116068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x116064u, 0x11606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11606Cu;
label_11606c:
    // 0x11606c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11606Cu;
    {
        const bool branch_taken_0x11606c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11606Cu;
        // 0x116070: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11606c) {
            ctx->pc = 0x116088u;
            goto label_116088;
        }
    }
    ctx->pc = 0x116074u;
label_116074:
    // 0x116074: 0xc043808  jal         func_10E020
    ctx->pc = 0x116074u;
    SET_GPR_U32(ctx, 31, 0x11607Cu);
    ctx->pc = 0x116078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116074u;
    // 0x116078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x116074u, 0x11607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11607Cu;
label_11607c:
    // 0x11607c: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x11607Cu;
    SET_GPR_U32(ctx, 31, 0x116084u);
    ctx->pc = 0x116080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11607Cu;
    // 0x116080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x11607Cu, 0x116084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116084u;
label_116084:
    // 0x116084: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x116084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_116088:
    // 0x116088: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x116088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11608c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x11608cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x116090: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x116090u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116094: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x116094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116098: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x116098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11609c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x11609cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1160a0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1160a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1160a4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1160a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1160a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1160A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1160ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160A8u;
        // 0x1160ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1160A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1160B0u;
}
