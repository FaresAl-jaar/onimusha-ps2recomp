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

// Function: sub_0029C110
// Address: 0x29c110 - 0x29c444
void sub_0029C110_0x29c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C110_0x29c110");
#endif

    switch (ctx->pc) {
        case 0x29c178u: goto label_29c178;
        case 0x29c218u: goto label_29c218;
        case 0x29c238u: goto label_29c238;
        case 0x29c2c0u: goto label_29c2c0;
        case 0x29c2e0u: goto label_29c2e0;
        case 0x29c354u: goto label_29c354;
        case 0x29c368u: goto label_29c368;
        case 0x29c398u: goto label_29c398;
        case 0x29c3e8u: goto label_29c3e8;
        case 0x29c3f8u: goto label_29c3f8;
        case 0x29c408u: goto label_29c408;
        case 0x29c414u: goto label_29c414;
        case 0x29c420u: goto label_29c420;
        default: break;
    }

    ctx->pc = 0x29c110u;

    // 0x29c110: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x29c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x29c114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c118: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29c11c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x29c120: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29c120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29c124: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29c124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c128: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29c12c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29c12cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29c130: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C130u;
    {
        const bool branch_taken_0x29c130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C130u;
        // 0x29c134: 0xa0820172  sb          $v0, 0x172($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 370), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c130) {
            ctx->pc = 0x29C148u;
            goto label_29c148;
        }
    }
    ctx->pc = 0x29C138u;
    // 0x29c138: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x29c138u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29c13c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x29c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29c140: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29C140u;
    {
        const bool branch_taken_0x29c140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C140u;
        // 0x29c144: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c140) {
            ctx->pc = 0x29C168u;
            goto label_29c168;
        }
    }
    ctx->pc = 0x29C148u;
label_29c148:
    // 0x29c148: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x29c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x29c14c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29c14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c150: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x29c150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29c154: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x29c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x29c158: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x29c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29c15c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x29c15cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29c160: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x29c160u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x29c164: 0x0  nop
    ctx->pc = 0x29c164u;
    // NOP
label_29c168:
    // 0x29c168: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29c168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c16c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29c16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c170: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29C170u;
    {
        const bool branch_taken_0x29c170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C170u;
        // 0x29c174: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c170) {
            ctx->pc = 0x29C1A8u;
            goto label_29c1a8;
        }
    }
    ctx->pc = 0x29C178u;
label_29c178:
    // 0x29c178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c17c: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x29c17cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c180: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x29c180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29c184: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x29c184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29c188: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x29c188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29c18c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x29c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x29c190: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29c194: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x29c194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29c198: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x29c198u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x29c19c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x29c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c1a0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x29c1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x29c1a4: 0x0  nop
    ctx->pc = 0x29c1a4u;
    // NOP
label_29c1a8:
    // 0x29c1a8: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x29c1a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29c1ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x29C1ACu;
    {
        const bool branch_taken_0x29c1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c1ac) {
            ctx->pc = 0x29C178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c178;
        }
    }
    ctx->pc = 0x29C1B4u;
    // 0x29c1b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x29c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x29c1b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29c1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1bc: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x29c1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x29c1c0: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x29c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c1c4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x29c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x29c1c8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x29c1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x29c1cc: 0xc7a70078  lwc1        $f7, 0x78($sp)
    ctx->pc = 0x29c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29c1d0: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x29c1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29c1d4: 0x3c0241cf  lui         $v0, 0x41CF
    ctx->pc = 0x29c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16847 << 16));
    // 0x29c1d8: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x29c1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29c1dc: 0x3442d89a  ori         $v0, $v0, 0xD89A
    ctx->pc = 0x29c1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55450);
    // 0x29c1e0: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x29c1e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x29c1e4: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x29c1e4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x29c1e8: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x29c1e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x29c1ec: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x29c1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c1f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29c1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29c1f4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x29c1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x29c1f8: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x29c1f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29c1fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29c1fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x29c200: 0xe7a60078  swc1        $f6, 0x78($sp)
    ctx->pc = 0x29c200u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x29c204: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x29c204u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x29c208: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x29c208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x29c20c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29C20Cu;
    {
        const bool branch_taken_0x29c20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C20Cu;
        // 0x29c210: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c20c) {
            ctx->pc = 0x29C278u;
            goto label_29c278;
        }
    }
    ctx->pc = 0x29C214u;
    // 0x29c214: 0x0  nop
    ctx->pc = 0x29c214u;
    // NOP
label_29c218:
    // 0x29c218: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x29c218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x29c21c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29c220: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x29c220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x29c224: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x29c224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x29c228: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x29c228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x29c22c: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x29c22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x29c230: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x29C230u;
    SET_GPR_U32(ctx, 31, 0x29C238u);
    ctx->pc = 0x29C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C230u;
    // 0x29c234: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x29C230u, 0x29C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C238u;
label_29c238:
    // 0x29c238: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29C238u;
    {
        const bool branch_taken_0x29c238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c238) {
            ctx->pc = 0x29C260u;
            goto label_29c260;
        }
    }
    ctx->pc = 0x29C240u;
    // 0x29c240: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x29c240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c244: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x29c244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x29c248: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x29c248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29c24c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x29c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29c250: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x29c250u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c254: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29C254u;
    {
        const bool branch_taken_0x29c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C254u;
        // 0x29c258: 0xe4600074  swc1        $f0, 0x74($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c254) {
            ctx->pc = 0x29C270u;
            goto label_29c270;
        }
    }
    ctx->pc = 0x29C25Cu;
    // 0x29c25c: 0x0  nop
    ctx->pc = 0x29c25cu;
    // NOP
label_29c260:
    // 0x29c260: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x29c260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x29c264: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x29c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c268: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29c268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29c26c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x29c26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_29c270:
    // 0x29c270: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29c270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29c274: 0x0  nop
    ctx->pc = 0x29c274u;
    // NOP
label_29c278:
    // 0x29c278: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x29c278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29c27c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x29C27Cu;
    {
        const bool branch_taken_0x29c27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c27c) {
            ctx->pc = 0x29C218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c218;
        }
    }
    ctx->pc = 0x29C284u;
    // 0x29c284: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x29c284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x29c288: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x29c288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x29c28c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29C28Cu;
    {
        const bool branch_taken_0x29c28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c28c) {
            ctx->pc = 0x29C2D0u;
            goto label_29c2d0;
        }
    }
    ctx->pc = 0x29C294u;
    // 0x29c294: 0x92430172  lbu         $v1, 0x172($s2)
    ctx->pc = 0x29c294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 370)));
    // 0x29c298: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29c298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29c29c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x29c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x29c2a0: 0x26450180  addiu       $a1, $s2, 0x180
    ctx->pc = 0x29c2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x29c2a4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x29c2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x29c2a8: 0xa2430172  sb          $v1, 0x172($s2)
    ctx->pc = 0x29c2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 370), (uint8_t)GPR_U32(ctx, 3));
    // 0x29c2ac: 0xae400180  sw          $zero, 0x180($s2)
    ctx->pc = 0x29c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 0));
    // 0x29c2b0: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x29c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
    // 0x29c2b4: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x29c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
    // 0x29c2b8: 0xc041468  jal         func_1051A0
    ctx->pc = 0x29C2B8u;
    SET_GPR_U32(ctx, 31, 0x29C2C0u);
    ctx->pc = 0x29C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2B8u;
    // 0x29c2bc: 0xae40018c  sw          $zero, 0x18C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x29C2B8u, 0x29C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2C0u;
label_29c2c0:
    // 0x29c2c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x29c2c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x29c2c4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x29C2C4u;
    {
        const bool branch_taken_0x29c2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2C4u;
        // 0x29c2c8: 0xe640018c  swc1        $f0, 0x18C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2c4) {
            ctx->pc = 0x29C428u;
            goto label_29c428;
        }
    }
    ctx->pc = 0x29C2CCu;
    // 0x29c2cc: 0x0  nop
    ctx->pc = 0x29c2ccu;
    // NOP
label_29c2d0:
    // 0x29c2d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29c2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2d4: 0xc7b40074  lwc1        $f20, 0x74($sp)
    ctx->pc = 0x29c2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29c2d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29C2D8u;
    {
        const bool branch_taken_0x29c2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2D8u;
        // 0x29c2dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2d8) {
            ctx->pc = 0x29C338u;
            goto label_29c338;
        }
    }
    ctx->pc = 0x29C2E0u;
label_29c2e0:
    // 0x29c2e0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x29c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29c2e4: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x29c2e4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x29c2e8: 0x0  nop
    ctx->pc = 0x29c2e8u;
    // NOP
    // 0x29c2ec: 0x0  nop
    ctx->pc = 0x29c2ecu;
    // NOP
    // 0x29c2f0: 0x2010  mfhi        $a0
    ctx->pc = 0x29c2f0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x29c2f4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x29c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29c2f8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x29c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29c2fc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x29c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29c300: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29c300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29c304: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29c308: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x29c308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x29c30c: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x29c30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c310: 0xc4810074  lwc1        $f1, 0x74($a0)
    ctx->pc = 0x29c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c314: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29c314u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c318: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x29c318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x29c31c: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x29c31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c320: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x29c320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c324: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29C324u;
    {
        const bool branch_taken_0x29c324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c324) {
            ctx->pc = 0x29C330u;
            goto label_29c330;
        }
    }
    ctx->pc = 0x29C32Cu;
    // 0x29c32c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29c32cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_29c330:
    // 0x29c330: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x29c330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29c334: 0x0  nop
    ctx->pc = 0x29c334u;
    // NOP
label_29c338:
    // 0x29c338: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x29c338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29c33c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x29C33Cu;
    {
        const bool branch_taken_0x29c33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c33c) {
            ctx->pc = 0x29C2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c2e0;
        }
    }
    ctx->pc = 0x29C344u;
    // 0x29c344: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x29c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29c348: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29c348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c34c: 0xc0414d6  jal         func_105358
    ctx->pc = 0x29C34Cu;
    SET_GPR_U32(ctx, 31, 0x29C354u);
    ctx->pc = 0x29C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C34Cu;
    // 0x29c350: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x29C34Cu, 0x29C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C354u;
label_29c354:
    // 0x29c354: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x29c354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x29c358: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x29c358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x29c35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c360: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29C360u;
    {
        const bool branch_taken_0x29c360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C360u;
        // 0x29c364: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c360) {
            ctx->pc = 0x29C3C8u;
            goto label_29c3c8;
        }
    }
    ctx->pc = 0x29C368u;
label_29c368:
    // 0x29c368: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29c368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c36c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29c370: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x29c370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c374: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29c374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c378: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x29C378u;
    {
        const bool branch_taken_0x29c378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c378) {
            ctx->pc = 0x29C3C0u;
            goto label_29c3c0;
        }
    }
    ctx->pc = 0x29C380u;
    // 0x29c380: 0x92420172  lbu         $v0, 0x172($s2)
    ctx->pc = 0x29c380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 370)));
    // 0x29c384: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29c384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c388: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x29c388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x29c38c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29C38Cu;
    {
        const bool branch_taken_0x29c38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C38Cu;
        // 0x29c390: 0xa2420172  sb          $v0, 0x172($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 370), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c38c) {
            ctx->pc = 0x29C3A8u;
            goto label_29c3a8;
        }
    }
    ctx->pc = 0x29C394u;
    // 0x29c394: 0x0  nop
    ctx->pc = 0x29c394u;
    // NOP
label_29c398:
    // 0x29c398: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x29c398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29c39c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29c3a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29c3a4: 0xe4540074  swc1        $f20, 0x74($v0)
    ctx->pc = 0x29c3a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_29c3a8:
    // 0x29c3a8: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x29c3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29c3ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29C3ACu;
    {
        const bool branch_taken_0x29c3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c3ac) {
            ctx->pc = 0x29C398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c398;
        }
    }
    ctx->pc = 0x29C3B4u;
    // 0x29c3b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C3B4u;
    {
        const bool branch_taken_0x29c3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c3b4) {
            ctx->pc = 0x29C3D8u;
            goto label_29c3d8;
        }
    }
    ctx->pc = 0x29C3BCu;
    // 0x29c3bc: 0x0  nop
    ctx->pc = 0x29c3bcu;
    // NOP
label_29c3c0:
    // 0x29c3c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29c3c4: 0x0  nop
    ctx->pc = 0x29c3c4u;
    // NOP
label_29c3c8:
    // 0x29c3c8: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x29c3c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29c3cc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x29C3CCu;
    {
        const bool branch_taken_0x29c3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c3cc) {
            ctx->pc = 0x29C368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c368;
        }
    }
    ctx->pc = 0x29C3D4u;
    // 0x29c3d4: 0x0  nop
    ctx->pc = 0x29c3d4u;
    // NOP
label_29c3d8:
    // 0x29c3d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29c3dc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x29c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29c3e0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x29C3E0u;
    SET_GPR_U32(ctx, 31, 0x29C3E8u);
    ctx->pc = 0x29C3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C3E0u;
    // 0x29c3e4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x29C3E0u, 0x29C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C3E8u;
label_29c3e8:
    // 0x29c3e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29c3ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x29c3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29c3f0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x29C3F0u;
    SET_GPR_U32(ctx, 31, 0x29C3F8u);
    ctx->pc = 0x29C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C3F0u;
    // 0x29c3f4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x29C3F0u, 0x29C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C3F8u;
label_29c3f8:
    // 0x29c3f8: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x29c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x29c3fc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29c3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29c400: 0xc041460  jal         func_105180
    ctx->pc = 0x29C400u;
    SET_GPR_U32(ctx, 31, 0x29C408u);
    ctx->pc = 0x29C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C400u;
    // 0x29c404: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x29C400u, 0x29C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C408u;
label_29c408:
    // 0x29c408: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x29c408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x29c40c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x29C40Cu;
    SET_GPR_U32(ctx, 31, 0x29C414u);
    ctx->pc = 0x29C410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C40Cu;
    // 0x29c410: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x29C40Cu, 0x29C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C414u;
label_29c414:
    // 0x29c414: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x29c414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29c418: 0xc041468  jal         func_1051A0
    ctx->pc = 0x29C418u;
    SET_GPR_U32(ctx, 31, 0x29C420u);
    ctx->pc = 0x29C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C418u;
    // 0x29c41c: 0x26450180  addiu       $a1, $s2, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x29C418u, 0x29C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C420u;
label_29c420:
    // 0x29c420: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x29c420u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x29c424: 0xe640018c  swc1        $f0, 0x18C($s2)
    ctx->pc = 0x29c424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 396), bits); }
label_29c428:
    // 0x29c428: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29c428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c42c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x29c42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c430: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29c434: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29c434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c438: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29c438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C43Cu;
        // 0x29c440: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C444u;
}
