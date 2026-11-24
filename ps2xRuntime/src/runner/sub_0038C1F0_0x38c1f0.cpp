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

// Function: sub_0038C1F0
// Address: 0x38c1f0 - 0x38c418
void sub_0038C1F0_0x38c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C1F0_0x38c1f0");
#endif

    switch (ctx->pc) {
        case 0x38c284u: goto label_38c284;
        case 0x38c2acu: goto label_38c2ac;
        case 0x38c2fcu: goto label_38c2fc;
        case 0x38c314u: goto label_38c314;
        case 0x38c368u: goto label_38c368;
        case 0x38c388u: goto label_38c388;
        case 0x38c400u: goto label_38c400;
        default: break;
    }

    ctx->pc = 0x38c1f0u;

    // 0x38c1f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x38c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x38c1f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38c1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38c1f8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x38c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x38c1fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38c1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38c200: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x38c200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x38c204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38c204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38c208: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38c208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c20c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38c20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38c210: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38c210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c214: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x38c214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38c218: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x38c218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x38c21c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x38c21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38c220: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x38c220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c224: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x38c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38c228: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x38c228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x38c22c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x38c22cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x38c230: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x38c230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x38c234: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x38c234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38c238: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x38c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38c23c: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x38c23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38c240: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x38c240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38c244: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x38c244u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x38c248: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x38c248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x38c24c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x38c24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x38c250: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x38c250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x38c254: 0x8c850144  lw          $a1, 0x144($a0)
    ctx->pc = 0x38c254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x38c258: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x38c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38c25c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x38c25cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38c260: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x38c260u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x38c264: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x38c264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x38c268: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x38c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38c26c: 0xaca20110  sw          $v0, 0x110($a1)
    ctx->pc = 0x38c26cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 272), GPR_U32(ctx, 2));
    // 0x38c270: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x38c270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x38c274: 0xaca20114  sw          $v0, 0x114($a1)
    ctx->pc = 0x38c274u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 2));
    // 0x38c278: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x38c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x38c27c: 0xc0d0494  jal         func_341250
    ctx->pc = 0x38C27Cu;
    SET_GPR_U32(ctx, 31, 0x38C284u);
    ctx->pc = 0x38C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C27Cu;
    // 0x38c280: 0xaca20118  sw          $v0, 0x118($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x38C27Cu, 0x38C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C284u;
label_38c284:
    // 0x38c284: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x38c284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x38c288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c28c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x38c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x38c290: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x38c290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x38c294: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x38c294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x38c298: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x38c298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x38c29c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x38c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x38c2a0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x38c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x38c2a4: 0xc0d04e4  jal         func_341390
    ctx->pc = 0x38C2A4u;
    SET_GPR_U32(ctx, 31, 0x38C2ACu);
    ctx->pc = 0x38C2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C2A4u;
    // 0x38c2a8: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341390u, 0x38C2A4u, 0x38C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C2ACu;
label_38c2ac:
    // 0x38c2ac: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x38c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x38c2b0: 0xa6422acc  sh          $v0, 0x2ACC($s2)
    ctx->pc = 0x38c2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10956), (uint16_t)GPR_U32(ctx, 2));
    // 0x38c2b4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x38C2B4u;
    {
        const bool branch_taken_0x38c2b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2B4u;
        // 0x38c2b8: 0xa6502ad4  sh          $s0, 0x2AD4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 10964), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c2b4) {
            ctx->pc = 0x38C308u;
            goto label_38c308;
        }
    }
    ctx->pc = 0x38C2BCu;
    // 0x38c2bc: 0x96432acc  lhu         $v1, 0x2ACC($s2)
    ctx->pc = 0x38c2bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10956)));
    // 0x38c2c0: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x38c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x38c2c4: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x38c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x38c2c8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x38c2cc: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x38c2ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x38c2d0: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x38c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x38c2d4: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x38c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x38c2d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38c2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38c2e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x38c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38c2e4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x38c2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x38c2e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38C2E8u;
    {
        const bool branch_taken_0x38c2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c2e8) {
            ctx->pc = 0x38C308u;
            goto label_38c308;
        }
    }
    ctx->pc = 0x38C2F0u;
    // 0x38c2f0: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x38c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x38c2f4: 0xc0d1634  jal         func_3458D0
    ctx->pc = 0x38C2F4u;
    SET_GPR_U32(ctx, 31, 0x38C2FCu);
    ctx->pc = 0x38C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C2F4u;
    // 0x38c2f8: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3458D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3458D0u, 0x38C2F4u, 0x38C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C2FCu;
label_38c2fc:
    // 0x38c2fc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x38C2FCu;
    {
        const bool branch_taken_0x38c2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c2fc) {
            ctx->pc = 0x38C400u;
            goto label_38c400;
        }
    }
    ctx->pc = 0x38C304u;
    // 0x38c304: 0x0  nop
    ctx->pc = 0x38c304u;
    // NOP
label_38c308:
    // 0x38c308: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38c308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x38c30c: 0xc0c8a34  jal         func_3228D0
    ctx->pc = 0x38C30Cu;
    SET_GPR_U32(ctx, 31, 0x38C314u);
    ctx->pc = 0x38C310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C30Cu;
    // 0x38c310: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228D0u, 0x38C30Cu, 0x38C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C314u;
label_38c314:
    // 0x38c314: 0x8e470144  lw          $a3, 0x144($s2)
    ctx->pc = 0x38c314u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x38c318: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x38c318u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x38c31c: 0x2508ea90  addiu       $t0, $t0, -0x1570
    ctx->pc = 0x38c31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961808));
    // 0x38c320: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x38c320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x38c324: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x38c324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x38c328: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x38c328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x38c32c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x38c32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38c330: 0xace20130  sw          $v0, 0x130($a3)
    ctx->pc = 0x38c330u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 2));
    // 0x38c334: 0x8e420144  lw          $v0, 0x144($s2)
    ctx->pc = 0x38c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x38c338: 0x864700c2  lh          $a3, 0xC2($s2)
    ctx->pc = 0x38c338u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x38c33c: 0x8c490130  lw          $t1, 0x130($v0)
    ctx->pc = 0x38c33cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x38c340: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x38c340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x38c344: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x38c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x38c348: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x38c348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x38c34c: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x38c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x38c350: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x38c350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x38c354: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x38c354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x38c358: 0x1028021  addu        $s0, $t0, $v0
    ctx->pc = 0x38c358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x38c35c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x38c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x38c360: 0xc0c8028  jal         func_3200A0
    ctx->pc = 0x38C360u;
    SET_GPR_U32(ctx, 31, 0x38C368u);
    ctx->pc = 0x38C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C360u;
    // 0x38c364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3200A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3200A0u, 0x38C360u, 0x38C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C368u;
label_38c368:
    // 0x38c368: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x38c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x38c36c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38c36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38c370: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x38c370u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x38c374: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x38c374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38c378: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x38c378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38c37c: 0x24a5c420  addiu       $a1, $a1, -0x3BE0
    ctx->pc = 0x38c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951968));
    // 0x38c380: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x38C380u;
    SET_GPR_U32(ctx, 31, 0x38C388u);
    ctx->pc = 0x38C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C380u;
    // 0x38c384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x38C380u, 0x38C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C388u;
label_38c388:
    // 0x38c388: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38c38c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x38c38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x38c390: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x38c390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x38c394: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38c394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c398: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x38c398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c39c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x38c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x38c3a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x38c3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x38c3a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x38c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38c3a8: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x38c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    // 0x38c3ac: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x38c3acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x38c3b0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x38c3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x38c3b4: 0xae0700d0  sw          $a3, 0xD0($s0)
    ctx->pc = 0x38c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 7));
    // 0x38c3b8: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x38c3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x38c3bc: 0xae0700d4  sw          $a3, 0xD4($s0)
    ctx->pc = 0x38c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 7));
    // 0x38c3c0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x38c3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x38c3c4: 0xae0700d8  sw          $a3, 0xD8($s0)
    ctx->pc = 0x38c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 7));
    // 0x38c3c8: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x38c3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x38c3cc: 0xae0700dc  sw          $a3, 0xDC($s0)
    ctx->pc = 0x38c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 7));
    // 0x38c3d0: 0xa2060001  sb          $a2, 0x1($s0)
    ctx->pc = 0x38c3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x38c3d4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x38c3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x38c3d8: 0xa2040004  sb          $a0, 0x4($s0)
    ctx->pc = 0x38c3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x38c3dc: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x38c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x38c3e0: 0x8e430144  lw          $v1, 0x144($s2)
    ctx->pc = 0x38c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x38c3e4: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x38c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x38c3e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x38c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x38c3ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38c3f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x38c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x38c3f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38c3f8: 0xc0cfd08  jal         func_33F420
    ctx->pc = 0x38C3F8u;
    SET_GPR_U32(ctx, 31, 0x38C400u);
    ctx->pc = 0x38C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C3F8u;
    // 0x38c3fc: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F420u, 0x38C3F8u, 0x38C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C400u;
label_38c400:
    // 0x38c400: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38c400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38c404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38c404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38c408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38c408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c40c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38c40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c410: 0x3e00008  jr          $ra
    ctx->pc = 0x38C410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C410u;
        // 0x38c414: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C418u;
}
