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

// Function: sub_00131720
// Address: 0x131720 - 0x131838
void sub_00131720_0x131720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131720_0x131720");
#endif

    switch (ctx->pc) {
        case 0x131778u: goto label_131778;
        default: break;
    }

    ctx->pc = 0x131720u;

    // 0x131720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131724: 0x24b80110  addiu       $t8, $a1, 0x110
    ctx->pc = 0x131724u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x131728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13172c: 0x24af0128  addiu       $t7, $a1, 0x128
    ctx->pc = 0x13172cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 296));
    // 0x131730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x131734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131738: 0x8cae0228  lw          $t6, 0x228($a1)
    ctx->pc = 0x131738u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 552)));
    // 0x13173c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13173cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131740: 0x8cad00d4  lw          $t5, 0xD4($a1)
    ctx->pc = 0x131740u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x131744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131748: 0x8cac00dc  lw          $t4, 0xDC($a1)
    ctx->pc = 0x131748u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x13174c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131750: 0x8cab00e0  lw          $t3, 0xE0($a1)
    ctx->pc = 0x131750u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x131754: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x131754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131758: 0x8caa00e8  lw          $t2, 0xE8($a1)
    ctx->pc = 0x131758u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 232)));
    // 0x13175c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13175cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131760: 0x8ca900e4  lw          $t1, 0xE4($a1)
    ctx->pc = 0x131760u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x131764: 0x8cb90110  lw          $t9, 0x110($a1)
    ctx->pc = 0x131764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x131768: 0xe082a  slt         $at, $zero, $t6
    ctx->pc = 0x131768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x13176c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x13176Cu;
    {
        const bool branch_taken_0x13176c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x131770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13176Cu;
        // 0x131770: 0xacb90114  sw          $t9, 0x114($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13176c) {
            ctx->pc = 0x1317E0u;
            goto label_1317e0;
        }
    }
    ctx->pc = 0x131774u;
    // 0x131774: 0x0  nop
    ctx->pc = 0x131774u;
    // NOP
label_131778:
    // 0x131778: 0x8df90080  lw          $t9, 0x80($t7)
    ctx->pc = 0x131778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 128)));
    // 0x13177c: 0x1b92824  and         $a1, $t5, $t9
    ctx->pc = 0x13177cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & GPR_U64(ctx, 25));
    // 0x131780: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131780u;
    {
        const bool branch_taken_0x131780 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x131784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131780u;
        // 0x131784: 0x8df10000  lw          $s1, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131780) {
            ctx->pc = 0x131790u;
            goto label_131790;
        }
    }
    ctx->pc = 0x131788u;
    // 0x131788: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x131788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x13178c: 0x0  nop
    ctx->pc = 0x13178cu;
    // NOP
label_131790:
    // 0x131790: 0x1992824  and         $a1, $t4, $t9
    ctx->pc = 0x131790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & GPR_U64(ctx, 25));
    // 0x131794: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131794u;
    {
        const bool branch_taken_0x131794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x131794) {
            ctx->pc = 0x1317A0u;
            goto label_1317a0;
        }
    }
    ctx->pc = 0x13179Cu;
    // 0x13179c: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x13179cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
label_1317a0:
    // 0x1317a0: 0x1792824  and         $a1, $t3, $t9
    ctx->pc = 0x1317a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 25));
    // 0x1317a4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1317A4u;
    {
        const bool branch_taken_0x1317a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1317a4) {
            ctx->pc = 0x1317B0u;
            goto label_1317b0;
        }
    }
    ctx->pc = 0x1317ACu;
    // 0x1317ac: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x1317acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
label_1317b0:
    // 0x1317b0: 0x1592824  and         $a1, $t2, $t9
    ctx->pc = 0x1317b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & GPR_U64(ctx, 25));
    // 0x1317b4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1317B4u;
    {
        const bool branch_taken_0x1317b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1317b4) {
            ctx->pc = 0x1317C0u;
            goto label_1317c0;
        }
    }
    ctx->pc = 0x1317BCu;
    // 0x1317bc: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x1317bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
label_1317c0:
    // 0x1317c0: 0x1392824  and         $a1, $t1, $t9
    ctx->pc = 0x1317c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 25));
    // 0x1317c4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1317C4u;
    {
        const bool branch_taken_0x1317c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1317c4) {
            ctx->pc = 0x1317D0u;
            goto label_1317d0;
        }
    }
    ctx->pc = 0x1317CCu;
    // 0x1317cc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1317ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_1317d0:
    // 0x1317d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1317d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1317d4: 0x20e282a  slt         $a1, $s0, $t6
    ctx->pc = 0x1317d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1317d8: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1317D8u;
    {
        const bool branch_taken_0x1317d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1317DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317D8u;
        // 0x1317dc: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317d8) {
            ctx->pc = 0x131778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131778;
        }
    }
    ctx->pc = 0x1317E0u;
label_1317e0:
    // 0x1317e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1317e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1317e4: 0x8c29cec0  lw          $t1, -0x3140($at)
    ctx->pc = 0x1317e4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x1317e8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1317e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1317ec: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x1317ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x1317f0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1317F0u;
    {
        const bool branch_taken_0x1317f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1317f0) {
            ctx->pc = 0x131810u;
            goto label_131810;
        }
    }
    ctx->pc = 0x1317F8u;
    // 0x1317f8: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x1317f8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x1317fc: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x1317fcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
    // 0x131800: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x131800u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x131804: 0xaf000010  sw          $zero, 0x10($t8)
    ctx->pc = 0x131804u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 0));
    // 0x131808: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131808u;
    {
        const bool branch_taken_0x131808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131808u;
        // 0x13180c: 0xaf000014  sw          $zero, 0x14($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131808) {
            ctx->pc = 0x131828u;
            goto label_131828;
        }
    }
    ctx->pc = 0x131810u;
label_131810:
    // 0x131810: 0xaf080000  sw          $t0, 0x0($t8)
    ctx->pc = 0x131810u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 8));
    // 0x131814: 0xaf070008  sw          $a3, 0x8($t8)
    ctx->pc = 0x131814u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 7));
    // 0x131818: 0xaf06000c  sw          $a2, 0xC($t8)
    ctx->pc = 0x131818u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 6));
    // 0x13181c: 0xaf040010  sw          $a0, 0x10($t8)
    ctx->pc = 0x13181cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 4));
    // 0x131820: 0xaf030014  sw          $v1, 0x14($t8)
    ctx->pc = 0x131820u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 3));
    // 0x131824: 0x0  nop
    ctx->pc = 0x131824u;
    // NOP
label_131828:
    // 0x131828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13182c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13182cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131830: 0x3e00008  jr          $ra
    ctx->pc = 0x131830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131830u;
        // 0x131834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131838u;
}
