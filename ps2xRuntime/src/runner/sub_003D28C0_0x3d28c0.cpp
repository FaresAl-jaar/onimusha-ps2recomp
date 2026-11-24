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

// Function: sub_003D28C0
// Address: 0x3d28c0 - 0x3d2a90
void sub_003D28C0_0x3d28c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D28C0_0x3d28c0");
#endif

    switch (ctx->pc) {
        case 0x3d2928u: goto label_3d2928;
        case 0x3d2950u: goto label_3d2950;
        case 0x3d297cu: goto label_3d297c;
        case 0x3d29c0u: goto label_3d29c0;
        case 0x3d29d0u: goto label_3d29d0;
        case 0x3d2a3cu: goto label_3d2a3c;
        default: break;
    }

    ctx->pc = 0x3d28c0u;

    // 0x3d28c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3d28c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3d28c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3d28c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3d28c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3d28c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3d28cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3d28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3d28d0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x3d28d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d28d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d28d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3d28d8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3d28d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d28dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d28dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3d28e0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3d28e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d28e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d28e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3d28e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d28e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d28ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d28ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d28f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3d28f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d28f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d28f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d28f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3d28f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d28fc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3d28fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d2900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d2904: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d2904u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3d2908: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3d2908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d290c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d2910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d2914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2918: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3d2918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3d291c: 0x25082850  addiu       $t0, $t0, 0x2850
    ctx->pc = 0x3d291cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10320));
    // 0x3d2920: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3D2920u;
    SET_GPR_U32(ctx, 31, 0x3D2928u);
    ctx->pc = 0x3D2924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2920u;
    // 0x3d2924: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3D2920u, 0x3D2928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2928u;
label_3d2928:
    // 0x3d2928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d2928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d292c: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3D292Cu;
    {
        const bool branch_taken_0x3d292c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D292Cu;
        // 0x3d2930: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d292c) {
            ctx->pc = 0x3D2A58u;
            goto label_3d2a58;
        }
    }
    ctx->pc = 0x3D2934u;
    // 0x3d2934: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3d2934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d2938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d293c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3d293cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3d2940: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x3d2940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3d2944: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3d2944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2948: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3D2948u;
    SET_GPR_U32(ctx, 31, 0x3D2950u);
    ctx->pc = 0x3D294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2948u;
    // 0x3d294c: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3D2948u, 0x3D2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2950u;
label_3d2950:
    // 0x3d2950: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x3d2950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3d2954: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3d2954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3d2958: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x3d2958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d295c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d295cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2960: 0xa6020528  sh          $v0, 0x528($s0)
    ctx->pc = 0x3d2960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d2964: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d2964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d2968: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3d2968u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d296c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2970: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3d2970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d2974: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3D2974u;
    SET_GPR_U32(ctx, 31, 0x3D297Cu);
    ctx->pc = 0x3D2978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2974u;
    // 0x3d2978: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3D2974u, 0x3D297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D297Cu;
label_3d297c:
    // 0x3d297c: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3d297cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3d2980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d2980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d2984: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3d2984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3d2988: 0xa21e0558  sb          $fp, 0x558($s0)
    ctx->pc = 0x3d2988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 30));
    // 0x3d298c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D298Cu;
    {
        const bool branch_taken_0x3d298c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D298Cu;
        // 0x3d2990: 0xa2110559  sb          $s1, 0x559($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d298c) {
            ctx->pc = 0x3D29A4u;
            goto label_3d29a4;
        }
    }
    ctx->pc = 0x3D2994u;
    // 0x3d2994: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3d2994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3d2998: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3d2998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3d299c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D299Cu;
    {
        const bool branch_taken_0x3d299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D299Cu;
        // 0x3d29a0: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d299c) {
            ctx->pc = 0x3D29A8u;
            goto label_3d29a8;
        }
    }
    ctx->pc = 0x3D29A4u;
label_3d29a4:
    // 0x3d29a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d29a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d29a8:
    // 0x3d29a8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x3d29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x3d29ac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3d29acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d29b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d29b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d29b4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d29b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d29b8: 0xc096f00  jal         func_25BC00
    ctx->pc = 0x3D29B8u;
    SET_GPR_U32(ctx, 31, 0x3D29C0u);
    ctx->pc = 0x3D29BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D29B8u;
    // 0x3d29bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC00u, 0x3D29B8u, 0x3D29C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D29C0u;
label_3d29c0:
    // 0x3d29c0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d29c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d29c4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x3d29c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x3d29c8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3D29C8u;
    SET_GPR_U32(ctx, 31, 0x3D29D0u);
    ctx->pc = 0x3D29CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D29C8u;
    // 0x3d29cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3D29C8u, 0x3D29D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D29D0u;
label_3d29d0:
    // 0x3d29d0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D29D0u;
    {
        const bool branch_taken_0x3d29d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D29D0u;
        // 0x3d29d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d29d0) {
            ctx->pc = 0x3D29E4u;
            goto label_3d29e4;
        }
    }
    ctx->pc = 0x3D29D8u;
    // 0x3d29d8: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3d29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3d29dc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3d29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3d29e0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x3d29e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_3d29e4:
    // 0x3d29e4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3d29e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3d29e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d29e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d29ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3d29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3d29f0: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3d29f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d29f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d29f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d29f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d29fc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3d29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d2a00: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3d2a04: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d2a08: 0x24633228  addiu       $v1, $v1, 0x3228
    ctx->pc = 0x3d2a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12840));
    // 0x3d2a0c: 0x2442322c  addiu       $v0, $v0, 0x322C
    ctx->pc = 0x3d2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12844));
    // 0x3d2a10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d2a14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d2a18: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x3d2a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3d2a1c: 0xc68f0024  lwc1        $f15, 0x24($s4)
    ctx->pc = 0x3d2a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3d2a20: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x3d2a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d2a24: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3d2a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3d2a28: 0x3c02c537  lui         $v0, 0xC537
    ctx->pc = 0x3d2a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50487 << 16));
    // 0x3d2a2c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x3d2a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x3d2a30: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x3d2a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x3d2a34: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3D2A34u;
    SET_GPR_U32(ctx, 31, 0x3D2A3Cu);
    ctx->pc = 0x3D2A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2A34u;
    // 0x3d2a38: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3D2A34u, 0x3D2A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2A3Cu;
label_3d2a3c:
    // 0x3d2a3c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3d2a3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3d2a40: 0x3c02c537  lui         $v0, 0xC537
    ctx->pc = 0x3d2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50487 << 16));
    // 0x3d2a44: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x3d2a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x3d2a48: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x3d2a48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x3d2a4c: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x3d2a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x3d2a50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2A50u;
    {
        const bool branch_taken_0x3d2a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A50u;
        // 0x3d2a54: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2a50) {
            ctx->pc = 0x3D2A60u;
            goto label_3d2a60;
        }
    }
    ctx->pc = 0x3D2A58u;
label_3d2a58:
    // 0x3d2a58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d2a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2a5c: 0x0  nop
    ctx->pc = 0x3d2a5cu;
    // NOP
label_3d2a60:
    // 0x3d2a60: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3d2a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d2a64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3d2a64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d2a68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3d2a68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d2a6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d2a6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d2a70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d2a70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d2a74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d2a74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d2a78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d2a78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d2a7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d2a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d2a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d2a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d2a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d2a88: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A88u;
        // 0x3d2a8c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2A90u;
}
