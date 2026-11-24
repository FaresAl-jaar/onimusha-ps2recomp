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

// Function: sub_003BEC70
// Address: 0x3bec70 - 0x3beec4
void sub_003BEC70_0x3bec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BEC70_0x3bec70");
#endif

    switch (ctx->pc) {
        case 0x3becd0u: goto label_3becd0;
        case 0x3becfcu: goto label_3becfc;
        case 0x3bed0cu: goto label_3bed0c;
        case 0x3bed2cu: goto label_3bed2c;
        case 0x3bed6cu: goto label_3bed6c;
        case 0x3bede8u: goto label_3bede8;
        case 0x3bee00u: goto label_3bee00;
        case 0x3bee54u: goto label_3bee54;
        case 0x3bee90u: goto label_3bee90;
        case 0x3beea8u: goto label_3beea8;
        default: break;
    }

    ctx->pc = 0x3bec70u;

    // 0x3bec70: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3bec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x3bec74: 0x3c024436  lui         $v0, 0x4436
    ctx->pc = 0x3bec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17462 << 16));
    // 0x3bec78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bec7c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3bec7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bec80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3bec84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bec84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3bec88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bec8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bec8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bec90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3bec90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bec94: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3bec94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3bec98: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x3bec98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x3bec9c: 0xe7ac0124  swc1        $f12, 0x124($sp)
    ctx->pc = 0x3bec9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x3beca0: 0x3c02444f  lui         $v0, 0x444F
    ctx->pc = 0x3beca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17487 << 16));
    // 0x3beca4: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x3beca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x3beca8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3beca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3becac: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x3becacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x3becb0: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x3becb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x3becb4: 0xe7ac0114  swc1        $f12, 0x114($sp)
    ctx->pc = 0x3becb4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x3becb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3becb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3becbc: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x3becbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x3becc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3becc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3becc4: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x3becc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x3becc8: 0xc0996b8  jal         func_265AE0
    ctx->pc = 0x3BECC8u;
    SET_GPR_U32(ctx, 31, 0x3BECD0u);
    ctx->pc = 0x3BECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BECC8u;
    // 0x3beccc: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265AE0u, 0x3BECC8u, 0x3BECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BECD0u;
label_3becd0:
    // 0x3becd0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3becd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3becd4: 0x3c033bb6  lui         $v1, 0x3BB6
    ctx->pc = 0x3becd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15286 << 16));
    // 0x3becd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3becd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3becdc: 0x34630b61  ori         $v1, $v1, 0xB61
    ctx->pc = 0x3becdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2913);
    // 0x3bece0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bece0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bece4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3bece4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3bece8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bece8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3becec: 0x0  nop
    ctx->pc = 0x3bececu;
    // NOP
    // 0x3becf0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3becf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3becf4: 0xc099778  jal         func_265DE0
    ctx->pc = 0x3BECF4u;
    SET_GPR_U32(ctx, 31, 0x3BECFCu);
    ctx->pc = 0x3BECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BECF4u;
    // 0x3becf8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x3BECF4u, 0x3BECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BECFCu;
label_3becfc:
    // 0x3becfc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3becfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3bed00: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x3bed00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3bed04: 0xc0997ac  jal         func_265EB0
    ctx->pc = 0x3BED04u;
    SET_GPR_U32(ctx, 31, 0x3BED0Cu);
    ctx->pc = 0x3BED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BED04u;
    // 0x3bed08: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3BED04u, 0x3BED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BED0Cu;
label_3bed0c:
    // 0x3bed0c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x3bed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3bed10: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x3bed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3bed14: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3bed14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bed18: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3bed18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3bed1c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3bed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3bed20: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3bed20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3bed24: 0xc0997ac  jal         func_265EB0
    ctx->pc = 0x3BED24u;
    SET_GPR_U32(ctx, 31, 0x3BED2Cu);
    ctx->pc = 0x3BED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BED24u;
    // 0x3bed28: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3BED24u, 0x3BED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BED2Cu;
label_3bed2c:
    // 0x3bed2c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x3bed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3bed30: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x3bed30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3bed34: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3bed34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bed38: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3bed38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3bed3c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3bed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bed40: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x3bed40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3bed44: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3bed44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3bed48: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x3bed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bed4c: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x3bed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bed50: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x3bed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bed54: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3bed54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bed58: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bed58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bed5c: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bed5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bed60: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bed60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bed64: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BED64u;
    SET_GPR_U32(ctx, 31, 0x3BED6Cu);
    ctx->pc = 0x3BED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BED64u;
    // 0x3bed68: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BED64u, 0x3BED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BED6Cu;
label_3bed6c:
    // 0x3bed6c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3bed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bed70: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3bed70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3bed74: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3bed74u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bed78: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3bed78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3bed7c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bed7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bed80: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3bed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bed84: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3bed84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3bed88: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3bed88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3bed8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3bed8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bed90: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x3bed90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x3bed94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bed94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bed98: 0x0  nop
    ctx->pc = 0x3bed98u;
    // NOP
    // 0x3bed9c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x3bed9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x3beda0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3beda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3beda4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3beda4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3beda8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3beda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bedac: 0x0  nop
    ctx->pc = 0x3bedacu;
    // NOP
    // 0x3bedb0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bedb0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3bedb4: 0x70a01628  paddub      $v0, $a1, $zero
    ctx->pc = 0x3bedb4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x3bedb8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3bedb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3bedbc: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x3bedbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x3bedc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bedc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3bedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3bedc8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3bedc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bedcc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bedccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bedd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bedd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bedd4: 0x0  nop
    ctx->pc = 0x3bedd4u;
    // NOP
    // 0x3bedd8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3bedd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3beddc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3beddcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3bede0: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x3BEDE0u;
    SET_GPR_U32(ctx, 31, 0x3BEDE8u);
    ctx->pc = 0x3BEDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEDE0u;
    // 0x3bede4: 0x30500fff  andi        $s0, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x3BEDE0u, 0x3BEDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEDE8u;
label_3bede8:
    // 0x3bede8: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3bede8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3bedec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bedecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bedf0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3bedf0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3bedf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bedf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bedf8: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3BEDF8u;
    SET_GPR_U32(ctx, 31, 0x3BEE00u);
    ctx->pc = 0x3BEDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEDF8u;
    // 0x3bedfc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3BEDF8u, 0x3BEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEE00u;
label_3bee00:
    // 0x3bee00: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bee00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bee04: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3bee04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bee08: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3bee08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bee0c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3bee0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3bee10: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3bee10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3bee14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bee18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3bee18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bee1c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3BEE1Cu;
    {
        const bool branch_taken_0x3bee1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bee1c) {
            ctx->pc = 0x3BEEA8u;
            goto label_3beea8;
        }
    }
    ctx->pc = 0x3BEE24u;
    // 0x3bee24: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x3bee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bee28: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3bee28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3bee2c: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x3bee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bee30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3bee30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bee34: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x3bee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bee38: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x3bee38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3bee3c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3bee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bee40: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bee40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bee44: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bee44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bee48: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bee48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bee4c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BEE4Cu;
    SET_GPR_U32(ctx, 31, 0x3BEE54u);
    ctx->pc = 0x3BEE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEE4Cu;
    // 0x3bee50: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BEE4Cu, 0x3BEE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEE54u;
label_3bee54:
    // 0x3bee54: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3bee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bee58: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3bee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3bee5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3bee5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bee60: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3bee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3bee64: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bee64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bee68: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3bee68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3bee6c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3bee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bee70: 0x70601e28  paddub      $v1, $v1, $zero
    ctx->pc = 0x3bee70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3bee74: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3bee74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3bee78: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3bee78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x3bee7c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3bee7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3bee80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bee80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3bee84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bee88: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x3BEE88u;
    SET_GPR_U32(ctx, 31, 0x3BEE90u);
    ctx->pc = 0x3BEE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEE88u;
    // 0x3bee8c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x3BEE88u, 0x3BEE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEE90u;
label_3bee90:
    // 0x3bee90: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3bee90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3bee94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bee98: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3bee98u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3bee9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bee9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beea0: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3BEEA0u;
    SET_GPR_U32(ctx, 31, 0x3BEEA8u);
    ctx->pc = 0x3BEEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEEA0u;
    // 0x3beea4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3BEEA0u, 0x3BEEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEEA8u;
label_3beea8:
    // 0x3beea8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3beea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3beeac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3beeacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3beeb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3beeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3beeb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3beeb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3beeb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3beeb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3beebc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEEBCu;
        // 0x3beec0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEEC4u;
}
