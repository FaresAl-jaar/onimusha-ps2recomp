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

// Function: sub_001458D0
// Address: 0x1458d0 - 0x145f68
void sub_001458D0_0x1458d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001458D0_0x1458d0");
#endif

    switch (ctx->pc) {
        case 0x145918u: goto label_145918;
        case 0x14597cu: goto label_14597c;
        case 0x145988u: goto label_145988;
        case 0x1459a0u: goto label_1459a0;
        case 0x1459acu: goto label_1459ac;
        case 0x1459ecu: goto label_1459ec;
        case 0x1459f0u: goto label_1459f0;
        case 0x145a74u: goto label_145a74;
        case 0x145a8cu: goto label_145a8c;
        case 0x145b38u: goto label_145b38;
        case 0x145b4cu: goto label_145b4c;
        case 0x145b6cu: goto label_145b6c;
        case 0x145b98u: goto label_145b98;
        case 0x145bf4u: goto label_145bf4;
        case 0x145c28u: goto label_145c28;
        case 0x145cc0u: goto label_145cc0;
        case 0x145cd4u: goto label_145cd4;
        case 0x145ce0u: goto label_145ce0;
        case 0x145d68u: goto label_145d68;
        case 0x145e1cu: goto label_145e1c;
        case 0x145e28u: goto label_145e28;
        case 0x145e3cu: goto label_145e3c;
        case 0x145f18u: goto label_145f18;
        case 0x145f24u: goto label_145f24;
        case 0x145f3cu: goto label_145f3c;
        case 0x145f48u: goto label_145f48;
        default: break;
    }

    ctx->pc = 0x1458d0u;

    // 0x1458d0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1458d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1458d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1458d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1458d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1458d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1458dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1458dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1458e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1458e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1458e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1458e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1458e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1458e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1458ec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1458ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1458f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1458f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1458f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1458f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1458f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1458f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1458fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1458FCu;
    {
        const bool branch_taken_0x1458fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1458FCu;
        // 0x145900: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1458fc) {
            ctx->pc = 0x145910u;
            goto label_145910;
        }
    }
    ctx->pc = 0x145904u;
    // 0x145904: 0x8e220330  lw          $v0, 0x330($s1)
    ctx->pc = 0x145904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x145908: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x145908u;
    {
        const bool branch_taken_0x145908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145908) {
            ctx->pc = 0x1459B8u;
            goto label_1459b8;
        }
    }
    ctx->pc = 0x145910u;
label_145910:
    // 0x145910: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x145910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145914: 0x0  nop
    ctx->pc = 0x145914u;
    // NOP
label_145918:
    // 0x145918: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x14591c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x14591cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145920: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x145920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x145924: 0xac6000ec  sw          $zero, 0xEC($v1)
    ctx->pc = 0x145924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 0));
    // 0x145928: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x145928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14592c: 0xac6000e8  sw          $zero, 0xE8($v1)
    ctx->pc = 0x14592cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 0));
    // 0x145930: 0xac6000e4  sw          $zero, 0xE4($v1)
    ctx->pc = 0x145930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 0));
    // 0x145934: 0xac6000e0  sw          $zero, 0xE0($v1)
    ctx->pc = 0x145934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 0));
    // 0x145938: 0xac60012c  sw          $zero, 0x12C($v1)
    ctx->pc = 0x145938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 0));
    // 0x14593c: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x14593cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x145940: 0xac600124  sw          $zero, 0x124($v1)
    ctx->pc = 0x145940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 0));
    // 0x145944: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x145944u;
    {
        const bool branch_taken_0x145944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145944u;
        // 0x145948: 0xac600120  sw          $zero, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145944) {
            ctx->pc = 0x145918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145918;
        }
    }
    ctx->pc = 0x14594Cu;
    // 0x14594c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x14594cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x145950: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x145950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145954: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x145954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x145958: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x145958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14595c: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x14595cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x145960: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x145960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x145964: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x145964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x145968: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x145968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14596c: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x14596cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x145970: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x145970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x145974: 0xc04162c  jal         func_1058B0
    ctx->pc = 0x145974u;
    SET_GPR_U32(ctx, 31, 0x14597Cu);
    ctx->pc = 0x145978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145974u;
    // 0x145978: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1058B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1058B0u, 0x145974u, 0x14597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14597Cu;
label_14597c:
    // 0x14597c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14597cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145980: 0xc0a8ebc  jal         func_2A3AF0
    ctx->pc = 0x145980u;
    SET_GPR_U32(ctx, 31, 0x145988u);
    ctx->pc = 0x145984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145980u;
    // 0x145984: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3AF0u, 0x145980u, 0x145988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145988u;
label_145988:
    // 0x145988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14598c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x14598cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145990: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x145990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x145994: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x145994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x145998: 0xc051cd8  jal         func_147360
    ctx->pc = 0x145998u;
    SET_GPR_U32(ctx, 31, 0x1459A0u);
    ctx->pc = 0x14599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145998u;
    // 0x14599c: 0x27a80140  addiu       $t0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147360u, 0x145998u, 0x1459A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459A0u;
label_1459a0:
    // 0x1459a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1459a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459a4: 0xc0a8ecc  jal         func_2A3B30
    ctx->pc = 0x1459A4u;
    SET_GPR_U32(ctx, 31, 0x1459ACu);
    ctx->pc = 0x1459A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1459A4u;
    // 0x1459a8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B30u, 0x1459A4u, 0x1459ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459ACu;
label_1459ac:
    // 0x1459ac: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x1459ACu;
    {
        const bool branch_taken_0x1459ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1459ac) {
            ctx->pc = 0x145F48u;
            goto label_145f48;
        }
    }
    ctx->pc = 0x1459B4u;
    // 0x1459b4: 0x0  nop
    ctx->pc = 0x1459b4u;
    // NOP
label_1459b8:
    // 0x1459b8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1459b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1459bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1459bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1459c0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1459c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1459c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1459c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1459c8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1459c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1459cc: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1459ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1459d0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1459d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1459d4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1459d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1459d8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1459d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1459dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1459dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1459e0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1459e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1459e4: 0xc0519a4  jal         func_146690
    ctx->pc = 0x1459E4u;
    SET_GPR_U32(ctx, 31, 0x1459ECu);
    ctx->pc = 0x1459E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1459E4u;
    // 0x1459e8: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146690u, 0x1459E4u, 0x1459ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459ECu;
label_1459ec:
    // 0x1459ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1459ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1459f0:
    // 0x1459f0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1459f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1459f4: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x1459f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1459f8: 0x102000f7  beqz        $at, . + 4 + (0xF7 << 2)
    ctx->pc = 0x1459F8u;
    {
        const bool branch_taken_0x1459f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1459FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459F8u;
        // 0x1459fc: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1459f8) {
            ctx->pc = 0x145DD8u;
            goto label_145dd8;
        }
    }
    ctx->pc = 0x145A00u;
    // 0x145a00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x145a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x145a04: 0x246349b0  addiu       $v1, $v1, 0x49B0
    ctx->pc = 0x145a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18864));
    // 0x145a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145a0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145a10: 0x400008  jr          $v0
    ctx->pc = 0x145A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145A18u: goto label_145a18;
            case 0x145A40u: goto label_145a40;
            case 0x145AB0u: goto label_145ab0;
            case 0x145C58u: goto label_145c58;
            case 0x145DB8u: goto label_145db8;
            case 0x145DD8u: goto label_145dd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145A10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x145A18u;
label_145a18:
    // 0x145a18: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145a1c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145a20: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x145a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x145a24: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x145a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x145a28: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x145a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x145a2c: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x145a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
    // 0x145a30: 0xac4000e4  sw          $zero, 0xE4($v0)
    ctx->pc = 0x145a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
    // 0x145a34: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x145A34u;
    {
        const bool branch_taken_0x145a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A34u;
        // 0x145a38: 0xac4000e0  sw          $zero, 0xE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a34) {
            ctx->pc = 0x145DF0u;
            goto label_145df0;
        }
    }
    ctx->pc = 0x145A3Cu;
    // 0x145a3c: 0x0  nop
    ctx->pc = 0x145a3cu;
    // NOP
label_145a40:
    // 0x145a40: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145a44: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x145a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a48: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145a4c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x145a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x145a50: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x145a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145a54: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x145a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x145a58: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x145a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x145a5c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x145a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a60: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x145a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x145a64: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x145a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a68: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x145a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x145a6c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x145A6Cu;
    SET_GPR_U32(ctx, 31, 0x145A74u);
    ctx->pc = 0x145A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A6Cu;
    // 0x145a70: 0xafa300bc  sw          $v1, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x145A6Cu, 0x145A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A74u;
label_145a74:
    // 0x145a74: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x145a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145a78: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145a7c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145a80: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x145a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x145a84: 0xc0414dc  jal         func_105370
    ctx->pc = 0x145A84u;
    SET_GPR_U32(ctx, 31, 0x145A8Cu);
    ctx->pc = 0x145A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A84u;
    // 0x145a88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x145A84u, 0x145A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A8Cu;
label_145a8c:
    // 0x145a8c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x145a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a90: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145a94: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145a98: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x145a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x145a9c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x145a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145aa0: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x145aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x145aa4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x145aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145aa8: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x145AA8u;
    {
        const bool branch_taken_0x145aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AA8u;
        // 0x145aac: 0xe44000e8  swc1        $f0, 0xE8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145aa8) {
            ctx->pc = 0x145DF0u;
            goto label_145df0;
        }
    }
    ctx->pc = 0x145AB0u;
label_145ab0:
    // 0x145ab0: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x145ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x145ab4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x145ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x145ab8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x145ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145abc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x145abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x145ac0: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x145ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x145ac4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x145ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ac8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x145ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x145acc: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x145accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x145ad0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x145ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ad4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x145ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x145ad8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x145ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x145adc: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x145adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ae0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x145ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x145ae4: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x145ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ae8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x145ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x145aec: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x145aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x145af0: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x145af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x145af4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x145af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x145af8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145AF8u;
    {
        const bool branch_taken_0x145af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145af8) {
            ctx->pc = 0x145B10u;
            goto label_145b10;
        }
    }
    ctx->pc = 0x145B00u;
    // 0x145b00: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x145b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145b04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145B04u;
    {
        const bool branch_taken_0x145b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B04u;
        // 0x145b08: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b04) {
            ctx->pc = 0x145B18u;
            goto label_145b18;
        }
    }
    ctx->pc = 0x145B0Cu;
    // 0x145b0c: 0x0  nop
    ctx->pc = 0x145b0cu;
    // NOP
label_145b10:
    // 0x145b10: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x145b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145b14: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x145b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_145b18:
    // 0x145b18: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145b1c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x145b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145b20: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145b24: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x145b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x145b28: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x145b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x145b2c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x145b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145b30: 0xc0414d0  jal         func_105340
    ctx->pc = 0x145B30u;
    SET_GPR_U32(ctx, 31, 0x145B38u);
    ctx->pc = 0x145B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B30u;
    // 0x145b34: 0xe44000ec  swc1        $f0, 0xEC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x145B30u, 0x145B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B38u;
label_145b38:
    // 0x145b38: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145b3c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x145b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x145b40: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145b44: 0xc041472  jal         func_1051C8
    ctx->pc = 0x145B44u;
    SET_GPR_U32(ctx, 31, 0x145B4Cu);
    ctx->pc = 0x145B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B44u;
    // 0x145b48: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x145B44u, 0x145B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B4Cu;
label_145b4c:
    // 0x145b4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x145b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x145b50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x145b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x145b54: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x145b54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x145b58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145b5c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x145B5Cu;
    {
        const bool branch_taken_0x145b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B5Cu;
        // 0x145b60: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b5c) {
            ctx->pc = 0x145BE8u;
            goto label_145be8;
        }
    }
    ctx->pc = 0x145B64u;
    // 0x145b64: 0xc04d7fc  jal         func_135FF0
    ctx->pc = 0x145B64u;
    SET_GPR_U32(ctx, 31, 0x145B6Cu);
    ctx->pc = 0x145B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B64u;
    // 0x145b68: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FF0u, 0x145B64u, 0x145B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B6Cu;
label_145b6c:
    // 0x145b6c: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x145b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145b70: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145b74: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145b78: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x145b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x145b7c: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x145b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145b80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x145b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b84: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x145b84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x145b88: 0x0  nop
    ctx->pc = 0x145b88u;
    // NOP
    // 0x145b8c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x145b8cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x145b90: 0xc041728  jal         func_105CA0
    ctx->pc = 0x145B90u;
    SET_GPR_U32(ctx, 31, 0x145B98u);
    ctx->pc = 0x145B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B90u;
    // 0x145b94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x145B90u, 0x145B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B98u;
label_145b98:
    // 0x145b98: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x145b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145b9c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x145b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x145ba0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x145ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145ba4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145ba8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145bac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x145bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x145bb0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x145bb0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x145bb4: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x145bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x145bb8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x145bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145bbc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x145bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x145bc0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x145bc0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x145bc4: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x145bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x145bc8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x145bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145bcc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x145bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x145bd0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x145bd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x145bd4: 0x0  nop
    ctx->pc = 0x145bd4u;
    // NOP
    // 0x145bd8: 0x0  nop
    ctx->pc = 0x145bd8u;
    // NOP
    // 0x145bdc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x145BDCu;
    {
        const bool branch_taken_0x145bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BDCu;
        // 0x145be0: 0xe44000e8  swc1        $f0, 0xE8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145bdc) {
            ctx->pc = 0x145DF0u;
            goto label_145df0;
        }
    }
    ctx->pc = 0x145BE4u;
    // 0x145be4: 0x0  nop
    ctx->pc = 0x145be4u;
    // NOP
label_145be8:
    // 0x145be8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x145be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145bec: 0xc04d7fc  jal         func_135FF0
    ctx->pc = 0x145BECu;
    SET_GPR_U32(ctx, 31, 0x145BF4u);
    ctx->pc = 0x145BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145BECu;
    // 0x145bf0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FF0u, 0x145BECu, 0x145BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145BF4u;
label_145bf4:
    // 0x145bf4: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x145bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x145bf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x145bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x145bfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x145bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x145c00: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x145c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145c04: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145c08: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145c0c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x145c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x145c10: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x145c10u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x145c14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x145c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c18: 0x0  nop
    ctx->pc = 0x145c18u;
    // NOP
    // 0x145c1c: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x145c1cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x145c20: 0xc041728  jal         func_105CA0
    ctx->pc = 0x145C20u;
    SET_GPR_U32(ctx, 31, 0x145C28u);
    ctx->pc = 0x145C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145C20u;
    // 0x145c24: 0x46140b02  mul.s       $f12, $f1, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x145C20u, 0x145C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C28u;
label_145c28:
    // 0x145c28: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x145c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c2c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145c30: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145c34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x145c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x145c38: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x145c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x145c3c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x145c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c40: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x145c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x145c44: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x145c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x145c48: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x145c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x145c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x145c50: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x145C50u;
    {
        const bool branch_taken_0x145c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C50u;
        // 0x145c54: 0xe44000e8  swc1        $f0, 0xE8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c50) {
            ctx->pc = 0x145DF0u;
            goto label_145df0;
        }
    }
    ctx->pc = 0x145C58u;
label_145c58:
    // 0x145c58: 0x8e070088  lw          $a3, 0x88($s0)
    ctx->pc = 0x145c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x145c5c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145c60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x145c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x145c64: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145c68: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x145c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x145c6c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x145c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x145c70: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x145c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145c74: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x145c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c78: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x145c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x145c7c: 0x8e070088  lw          $a3, 0x88($s0)
    ctx->pc = 0x145c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x145c80: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x145c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c84: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x145c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x145c88: 0x8e070088  lw          $a3, 0x88($s0)
    ctx->pc = 0x145c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x145c8c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x145c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c90: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x145c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x145c94: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x145c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x145c98: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x145c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c9c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x145c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x145ca0: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x145ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ca4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x145ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x145ca8: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x145ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145cac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x145cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x145cb0: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x145cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x145cb4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x145cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145cb8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x145CB8u;
    SET_GPR_U32(ctx, 31, 0x145CC0u);
    ctx->pc = 0x145CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145CB8u;
    // 0x145cbc: 0xe44000ec  swc1        $f0, 0xEC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x145CB8u, 0x145CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145CC0u;
label_145cc0:
    // 0x145cc0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145cc4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x145cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x145cc8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145ccc: 0xc041472  jal         func_1051C8
    ctx->pc = 0x145CCCu;
    SET_GPR_U32(ctx, 31, 0x145CD4u);
    ctx->pc = 0x145CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145CCCu;
    // 0x145cd0: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x145CCCu, 0x145CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145CD4u;
label_145cd4:
    // 0x145cd4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x145cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145cd8: 0xc04d7fc  jal         func_135FF0
    ctx->pc = 0x145CD8u;
    SET_GPR_U32(ctx, 31, 0x145CE0u);
    ctx->pc = 0x145CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145CD8u;
    // 0x145cdc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FF0u, 0x145CD8u, 0x145CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145CE0u;
label_145ce0:
    // 0x145ce0: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x145ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x145ce4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x145ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x145ce8: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x145ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145cec: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x145cecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x145cf0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x145cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x145cf4: 0x46001883  div.s       $f2, $f3, $f0
    ctx->pc = 0x145cf4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x145cf8: 0x0  nop
    ctx->pc = 0x145cf8u;
    // NOP
    // 0x145cfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x145cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x145d00: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x145D00u;
    {
        const bool branch_taken_0x145d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D00u;
        // 0x145d04: 0x46020d02  mul.s       $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d00) {
            ctx->pc = 0x145D50u;
            goto label_145d50;
        }
    }
    ctx->pc = 0x145D08u;
    // 0x145d08: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x145d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x145d0c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x145d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x145d10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x145d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x145d14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x145d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145d18: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x145d18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x145d1c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x145d1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x145d20: 0x0  nop
    ctx->pc = 0x145d20u;
    // NOP
    // 0x145d24: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x145d24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x145d28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d2c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x145D2Cu;
    {
        const bool branch_taken_0x145d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145d2c) {
            ctx->pc = 0x145D50u;
            goto label_145d50;
        }
    }
    ctx->pc = 0x145D34u;
    // 0x145d34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x145d34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x145d38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x145d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x145d3c: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x145d3cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x145d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145d44: 0x0  nop
    ctx->pc = 0x145d44u;
    // NOP
    // 0x145d48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x145d48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x145d4c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x145d4cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_145d50:
    // 0x145d50: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145d54: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145d58: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x145d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x145d5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x145d5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x145d60: 0xc041728  jal         func_105CA0
    ctx->pc = 0x145D60u;
    SET_GPR_U32(ctx, 31, 0x145D68u);
    ctx->pc = 0x145D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D60u;
    // 0x145d64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x145D60u, 0x145D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D68u;
label_145d68:
    // 0x145d68: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x145d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145d6c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x145d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x145d70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x145d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145d74: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145d78: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145d7c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x145d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x145d80: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x145d80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x145d84: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x145d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x145d88: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x145d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145d8c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x145d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x145d90: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x145d90u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x145d94: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x145d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x145d98: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x145d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145d9c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x145d9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x145da0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x145da0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x145da4: 0x0  nop
    ctx->pc = 0x145da4u;
    // NOP
    // 0x145da8: 0x0  nop
    ctx->pc = 0x145da8u;
    // NOP
    // 0x145dac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x145DACu;
    {
        const bool branch_taken_0x145dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DACu;
        // 0x145db0: 0xe44000e8  swc1        $f0, 0xE8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145dac) {
            ctx->pc = 0x145DF0u;
            goto label_145df0;
        }
    }
    ctx->pc = 0x145DB4u;
    // 0x145db4: 0x0  nop
    ctx->pc = 0x145db4u;
    // NOP
label_145db8:
    // 0x145db8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x145db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145dbc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x145dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x145dc0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x145dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145dc4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x145dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x145dc8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x145dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145dcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145DCCu;
    {
        const bool branch_taken_0x145dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DCCu;
        // 0x145dd0: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145dcc) {
            ctx->pc = 0x145DF0u;
            goto label_145df0;
        }
    }
    ctx->pc = 0x145DD4u;
    // 0x145dd4: 0x0  nop
    ctx->pc = 0x145dd4u;
    // NOP
label_145dd8:
    // 0x145dd8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x145dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ddc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x145ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x145de0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x145de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145de4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x145de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x145de8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x145de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145dec: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x145decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_145df0:
    // 0x145df0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x145df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145df4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145df8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x145df8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x145dfc: 0xac40012c  sw          $zero, 0x12C($v0)
    ctx->pc = 0x145dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 0));
    // 0x145e00: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x145e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x145e04: 0x1440fefa  bnez        $v0, . + 4 + (-0x106 << 2)
    ctx->pc = 0x145E04u;
    {
        const bool branch_taken_0x145e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E04u;
        // 0x145e08: 0x26520034  addiu       $s2, $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e04) {
            ctx->pc = 0x1459F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1459f0;
        }
    }
    ctx->pc = 0x145E0Cu;
    // 0x145e0c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x145e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x145e10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x145e10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e14: 0xc041468  jal         func_1051A0
    ctx->pc = 0x145E14u;
    SET_GPR_U32(ctx, 31, 0x145E1Cu);
    ctx->pc = 0x145E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E14u;
    // 0x145e18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x145E14u, 0x145E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E1Cu;
label_145e1c:
    // 0x145e1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x145e1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x145e20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x145E20u;
    {
        const bool branch_taken_0x145e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E20u;
        // 0x145e24: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e20) {
            ctx->pc = 0x145E58u;
            goto label_145e58;
        }
    }
    ctx->pc = 0x145E28u;
label_145e28:
    // 0x145e28: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x145e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x145e2c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x145e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x145e30: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x145e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x145e34: 0xc041468  jal         func_1051A0
    ctx->pc = 0x145E34u;
    SET_GPR_U32(ctx, 31, 0x145E3Cu);
    ctx->pc = 0x145E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E34u;
    // 0x145e38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x145E34u, 0x145E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E3Cu;
label_145e3c:
    // 0x145e3c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x145e3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145e40: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x145E40u;
    {
        const bool branch_taken_0x145e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145e40) {
            ctx->pc = 0x145E50u;
            goto label_145e50;
        }
    }
    ctx->pc = 0x145E48u;
    // 0x145e48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x145e48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x145e4c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x145e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_145e50:
    // 0x145e50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x145e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x145e54: 0x0  nop
    ctx->pc = 0x145e54u;
    // NOP
label_145e58:
    // 0x145e58: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x145e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x145e5c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x145E5Cu;
    {
        const bool branch_taken_0x145e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e5c) {
            ctx->pc = 0x145E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145e28;
        }
    }
    ctx->pc = 0x145E64u;
    // 0x145e64: 0x12600026  beqz        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x145E64u;
    {
        const bool branch_taken_0x145e64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E64u;
        // 0x145e68: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e64) {
            ctx->pc = 0x145F00u;
            goto label_145f00;
        }
    }
    ctx->pc = 0x145E6Cu;
    // 0x145e6c: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x145e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x145e70: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x145e70u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145e74: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x145e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145e78: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x145e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x145e7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x145e7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e80: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x145e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x145e84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x145e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e88: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x145e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145e8c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x145e8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e90: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x145e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x145e94: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x145e94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x145e98: 0x246a0120  addiu       $t2, $v1, 0x120
    ctx->pc = 0x145e98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x145e9c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x145e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x145ea0: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x145ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x145ea4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x145ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145ea8: 0x788b0000  lq          $t3, 0x0($a0)
    ctx->pc = 0x145ea8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145eac: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x145eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x145eb0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x145eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x145eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145eb8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x145eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x145ebc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x145ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x145ec0: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x145ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
    // 0x145ec4: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x145ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x145ec8: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x145ec8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x145ecc: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x145eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x145ed0: 0x248500e0  addiu       $a1, $a0, 0xE0
    ctx->pc = 0x145ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x145ed4: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x145ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x145ed8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x145ed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145edc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x145edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x145ee0: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x145ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
    // 0x145ee4: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x145ee4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145ee8: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x145ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x145eec: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x145eecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x145ef0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x145ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x145ef4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x145ef4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145ef8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x145ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x145efc: 0x0  nop
    ctx->pc = 0x145efcu;
    // NOP
label_145f00:
    // 0x145f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f04: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x145f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145f08: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x145f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x145f0c: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x145f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x145f10: 0xc051cd8  jal         func_147360
    ctx->pc = 0x145F10u;
    SET_GPR_U32(ctx, 31, 0x145F18u);
    ctx->pc = 0x145F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F10u;
    // 0x145f14: 0x27a80140  addiu       $t0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147360u, 0x145F10u, 0x145F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F18u;
label_145f18:
    // 0x145f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f1c: 0xc0a8ecc  jal         func_2A3B30
    ctx->pc = 0x145F1Cu;
    SET_GPR_U32(ctx, 31, 0x145F24u);
    ctx->pc = 0x145F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F1Cu;
    // 0x145f20: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B30u, 0x145F1Cu, 0x145F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F24u;
label_145f24:
    // 0x145f24: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x145f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145f28: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x145f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x145f2c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x145f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x145f30: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x145f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x145f34: 0xc04162c  jal         func_1058B0
    ctx->pc = 0x145F34u;
    SET_GPR_U32(ctx, 31, 0x145F3Cu);
    ctx->pc = 0x145F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F34u;
    // 0x145f38: 0x27a80110  addiu       $t0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1058B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1058B0u, 0x145F34u, 0x145F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F3Cu;
label_145f3c:
    // 0x145f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f40: 0xc0a8ebc  jal         func_2A3AF0
    ctx->pc = 0x145F40u;
    SET_GPR_U32(ctx, 31, 0x145F48u);
    ctx->pc = 0x145F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F40u;
    // 0x145f44: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3AF0u, 0x145F40u, 0x145F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F48u;
label_145f48:
    // 0x145f48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x145f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145f4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x145f4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145f50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x145f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x145f54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x145f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145f58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x145f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145f5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x145f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145f60: 0x3e00008  jr          $ra
    ctx->pc = 0x145F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F60u;
        // 0x145f64: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145F68u;
}
