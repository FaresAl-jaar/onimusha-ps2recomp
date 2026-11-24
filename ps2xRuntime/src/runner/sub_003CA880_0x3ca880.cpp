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

// Function: sub_003CA880
// Address: 0x3ca880 - 0x3caa74
void sub_003CA880_0x3ca880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA880_0x3ca880");
#endif

    switch (ctx->pc) {
        case 0x3ca8b8u: goto label_3ca8b8;
        case 0x3ca8d0u: goto label_3ca8d0;
        case 0x3ca910u: goto label_3ca910;
        case 0x3ca92cu: goto label_3ca92c;
        case 0x3ca94cu: goto label_3ca94c;
        case 0x3ca95cu: goto label_3ca95c;
        case 0x3ca9ccu: goto label_3ca9cc;
        case 0x3ca9dcu: goto label_3ca9dc;
        default: break;
    }

    ctx->pc = 0x3ca880u;

    // 0x3ca880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ca880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3ca884: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3ca884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3ca888: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ca888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3ca88c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ca88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3ca890: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ca890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ca894: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ca894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca898: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ca898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ca89c: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x3ca89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3ca8a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ca8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ca8a4: 0x26650870  addiu       $a1, $s3, 0x870
    ctx->pc = 0x3ca8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2160));
    // 0x3ca8a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ca8a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ca8ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ca8acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca8b0: 0xc096908  jal         func_25A420
    ctx->pc = 0x3CA8B0u;
    SET_GPR_U32(ctx, 31, 0x3CA8B8u);
    ctx->pc = 0x3CA8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA8B0u;
    // 0x3ca8b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x3CA8B0u, 0x3CA8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA8B8u;
label_3ca8b8:
    // 0x3ca8b8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3ca8b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ca8bc: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x3CA8BCu;
    {
        const bool branch_taken_0x3ca8bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA8BCu;
        // 0x3ca8c0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca8bc) {
            ctx->pc = 0x3CA918u;
            goto label_3ca918;
        }
    }
    ctx->pc = 0x3CA8C4u;
    // 0x3ca8c4: 0x26650870  addiu       $a1, $s3, 0x870
    ctx->pc = 0x3ca8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2160));
    // 0x3ca8c8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3CA8C8u;
    SET_GPR_U32(ctx, 31, 0x3CA8D0u);
    ctx->pc = 0x3CA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA8C8u;
    // 0x3ca8cc: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3CA8C8u, 0x3CA8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA8D0u;
label_3ca8d0:
    // 0x3ca8d0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3ca8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x3ca8d4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3ca8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x3ca8d8: 0x92660002  lbu         $a2, 0x2($s3)
    ctx->pc = 0x3ca8d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3ca8dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3ca8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3ca8e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ca8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ca8e4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3ca8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3ca8e8: 0x24630b8c  addiu       $v1, $v1, 0xB8C
    ctx->pc = 0x3ca8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2956));
    // 0x3ca8ec: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x3ca8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x3ca8f0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3ca8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3ca8f4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x3ca8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3ca8f8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3ca8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ca8fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ca8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ca900: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ca900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ca904: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3ca904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca908: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x3CA908u;
    SET_GPR_U32(ctx, 31, 0x3CA910u);
    ctx->pc = 0x3CA90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA908u;
    // 0x3ca90c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x3CA908u, 0x3CA910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA910u;
label_3ca910:
    // 0x3ca910: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3CA910u;
    {
        const bool branch_taken_0x3ca910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca910) {
            ctx->pc = 0x3CA950u;
            goto label_3ca950;
        }
    }
    ctx->pc = 0x3CA918u;
label_3ca918:
    // 0x3ca918: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3ca918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3ca91c: 0x26650890  addiu       $a1, $s3, 0x890
    ctx->pc = 0x3ca91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
    // 0x3ca920: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x3ca920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3ca924: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3CA924u;
    SET_GPR_U32(ctx, 31, 0x3CA92Cu);
    ctx->pc = 0x3CA928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA924u;
    // 0x3ca928: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3CA924u, 0x3CA92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA92Cu;
label_3ca92c:
    // 0x3ca92c: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x3ca92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x3ca930: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x3ca930u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x3ca934: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x3ca934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x3ca938: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x3ca938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x3ca93c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3ca93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x3ca940: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ca940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ca944: 0xc0968e8  jal         func_25A3A0
    ctx->pc = 0x3CA944u;
    SET_GPR_U32(ctx, 31, 0x3CA94Cu);
    ctx->pc = 0x3CA948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA944u;
    // 0x3ca948: 0x26650090  addiu       $a1, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A0u, 0x3CA944u, 0x3CA94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA94Cu;
label_3ca94c:
    // 0x3ca94c: 0x0  nop
    ctx->pc = 0x3ca94cu;
    // NOP
label_3ca950:
    // 0x3ca950: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x3ca950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3ca954: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x3CA954u;
    SET_GPR_U32(ctx, 31, 0x3CA95Cu);
    ctx->pc = 0x3CA958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA954u;
    // 0x3ca958: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x3CA954u, 0x3CA95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA95Cu;
label_3ca95c:
    // 0x3ca95c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3ca95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3ca960: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3ca960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3ca964: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3ca964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ca968: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3ca968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3ca96c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ca96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ca970: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x3ca970u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3ca974: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3ca974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3ca978: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3ca978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3ca97c: 0x24630b94  addiu       $v1, $v1, 0xB94
    ctx->pc = 0x3ca97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2964));
    // 0x3ca980: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x3ca980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x3ca984: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3ca984u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3ca988: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3ca988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3ca98c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3ca98cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3ca990: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3ca990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3ca994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ca994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ca998: 0x84700000  lh          $s0, 0x0($v1)
    ctx->pc = 0x3ca998u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ca99c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ca99cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ca9a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ca9a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ca9a4: 0x0  nop
    ctx->pc = 0x3ca9a4u;
    // NOP
    // 0x3ca9a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3ca9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3ca9ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3ca9acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3ca9b0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3ca9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3ca9b4: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x3ca9b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3ca9b8: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x3ca9b8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x3ca9bc: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x3ca9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3ca9c0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3ca9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3ca9c4: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3CA9C4u;
    SET_GPR_U32(ctx, 31, 0x3CA9CCu);
    ctx->pc = 0x3CA9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA9C4u;
    // 0x3ca9c8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3CA9C4u, 0x3CA9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA9CCu;
label_3ca9cc:
    // 0x3ca9cc: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x3ca9ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3ca9d0: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x3ca9d0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x3ca9d4: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x3CA9D4u;
    SET_GPR_U32(ctx, 31, 0x3CA9DCu);
    ctx->pc = 0x3CA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA9D4u;
    // 0x3ca9d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x3CA9D4u, 0x3CA9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA9DCu;
label_3ca9dc:
    // 0x3ca9dc: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x3ca9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3ca9e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3ca9e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3ca9e4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3ca9e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ca9e8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CA9E8u;
    {
        const bool branch_taken_0x3ca9e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca9e8) {
            ctx->pc = 0x3CAA08u;
            goto label_3caa08;
        }
    }
    ctx->pc = 0x3CA9F0u;
    // 0x3ca9f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ca9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca9f4: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3CA9F4u;
    {
        const bool branch_taken_0x3ca9f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA9F4u;
        // 0x3ca9f8: 0xa67100c2  sh          $s1, 0xC2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca9f4) {
            ctx->pc = 0x3CAA38u;
            goto label_3caa38;
        }
    }
    ctx->pc = 0x3CA9FCu;
    // 0x3ca9fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3CA9FCu;
    {
        const bool branch_taken_0x3ca9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA9FCu;
        // 0x3caa00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca9fc) {
            ctx->pc = 0x3CAA50u;
            goto label_3caa50;
        }
    }
    ctx->pc = 0x3CAA04u;
    // 0x3caa04: 0x0  nop
    ctx->pc = 0x3caa04u;
    // NOP
label_3caa08:
    // 0x3caa08: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x3caa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x3caa0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3caa0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3caa10: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CAA10u;
    {
        const bool branch_taken_0x3caa10 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3caa10) {
            ctx->pc = 0x3CAA28u;
            goto label_3caa28;
        }
    }
    ctx->pc = 0x3CAA18u;
    // 0x3caa18: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x3caa18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x3caa1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3caa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3caa20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3CAA20u;
    {
        const bool branch_taken_0x3caa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA20u;
        // 0x3caa24: 0xa66200c2  sh          $v0, 0xC2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caa20) {
            ctx->pc = 0x3CAA38u;
            goto label_3caa38;
        }
    }
    ctx->pc = 0x3CAA28u;
label_3caa28:
    // 0x3caa28: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x3caa28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x3caa2c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3caa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3caa30: 0xa66200c2  sh          $v0, 0xC2($s3)
    ctx->pc = 0x3caa30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3caa34: 0x0  nop
    ctx->pc = 0x3caa34u;
    // NOP
label_3caa38:
    // 0x3caa38: 0x866300c2  lh          $v1, 0xC2($s3)
    ctx->pc = 0x3caa38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x3caa3c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3caa3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3caa40: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x3caa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x3caa44: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3caa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3caa48: 0xa66300c2  sh          $v1, 0xC2($s3)
    ctx->pc = 0x3caa48u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x3caa4c: 0x0  nop
    ctx->pc = 0x3caa4cu;
    // NOP
label_3caa50:
    // 0x3caa50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3caa50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3caa54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3caa54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3caa58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3caa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3caa5c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3caa5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3caa60: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3caa60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3caa64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3caa64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3caa68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3caa68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3caa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CAA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA6Cu;
        // 0x3caa70: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CAA74u;
}
