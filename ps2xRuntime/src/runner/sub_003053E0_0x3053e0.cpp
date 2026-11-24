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

// Function: sub_003053E0
// Address: 0x3053e0 - 0x30553c
void sub_003053E0_0x3053e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003053E0_0x3053e0");
#endif

    switch (ctx->pc) {
        case 0x30541cu: goto label_30541c;
        default: break;
    }

    ctx->pc = 0x3053e0u;

    // 0x3053e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3053e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3053e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3053e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3053e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3053e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3053ec: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3053ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3053f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3053f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3053f4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3053f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3053f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3053f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3053fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3053fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x305400: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x305400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x305404: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x305404u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x305408: 0x2484e080  addiu       $a0, $a0, -0x1F80
    ctx->pc = 0x305408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    // 0x30540c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x30540cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x305410: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x305410u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x305414: 0xc0c0c80  jal         func_303200
    ctx->pc = 0x305414u;
    SET_GPR_U32(ctx, 31, 0x30541Cu);
    ctx->pc = 0x305418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305414u;
    // 0x305418: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x303200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303200u, 0x305414u, 0x30541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30541Cu;
label_30541c:
    // 0x30541c: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x30541cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x305420: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x305420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x305424: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x305424u;
    {
        const bool branch_taken_0x305424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305424u;
        // 0x305428: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305424) {
            ctx->pc = 0x305460u;
            goto label_305460;
        }
    }
    ctx->pc = 0x30542Cu;
    // 0x30542c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x30542cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x305430: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x305430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x305434: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x305434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x305438: 0x3c03008e  lui         $v1, 0x8E
    ctx->pc = 0x305438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)142 << 16));
    // 0x30543c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x30543cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x305440: 0x2463e0e2  addiu       $v1, $v1, -0x1F1E
    ctx->pc = 0x305440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959330));
    // 0x305444: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x305444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x305448: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x305448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30544c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x30544cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305450: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x305450u;
    {
        const bool branch_taken_0x305450 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x305450) {
            ctx->pc = 0x305460u;
            goto label_305460;
        }
    }
    ctx->pc = 0x305458u;
    // 0x305458: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x305458u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x30545c: 0x0  nop
    ctx->pc = 0x30545cu;
    // NOP
label_305460:
    // 0x305460: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x305460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x305464: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x305464u;
    {
        const bool branch_taken_0x305464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305464u;
        // 0x305468: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305464) {
            ctx->pc = 0x305488u;
            goto label_305488;
        }
    }
    ctx->pc = 0x30546Cu;
    // 0x30546c: 0x3c03008e  lui         $v1, 0x8E
    ctx->pc = 0x30546cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)142 << 16));
    // 0x305470: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x305470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x305474: 0x2463e080  addiu       $v1, $v1, -0x1F80
    ctx->pc = 0x305474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959232));
    // 0x305478: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x305478u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30547c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30547cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x305480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305480u;
    {
        const bool branch_taken_0x305480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305480u;
        // 0x305484: 0x645821  addu        $t3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305480) {
            ctx->pc = 0x305490u;
            goto label_305490;
        }
    }
    ctx->pc = 0x305488u;
label_305488:
    // 0x305488: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x305488u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30548c: 0x0  nop
    ctx->pc = 0x30548cu;
    // NOP
label_305490:
    // 0x305490: 0x11600023  beqz        $t3, . + 4 + (0x23 << 2)
    ctx->pc = 0x305490u;
    {
        const bool branch_taken_0x305490 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x305494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305490u;
        // 0x305494: 0x25690020  addiu       $t1, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305490) {
            ctx->pc = 0x305520u;
            goto label_305520;
        }
    }
    ctx->pc = 0x305498u;
    // 0x305498: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x305498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30549c: 0x7a0a0000  lq          $t2, 0x0($s0)
    ctx->pc = 0x30549cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3054a0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x3054a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3054a4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3054a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3054a8: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x3054a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3054ac: 0x2406ff07  addiu       $a2, $zero, -0xF9
    ctx->pc = 0x3054acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967047));
    // 0x3054b0: 0x3c0380ff  lui         $v1, 0x80FF
    ctx->pc = 0x3054b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33023 << 16));
    // 0x3054b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3054b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3054b8: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x3054b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3054bc: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x3054bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x3054c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3054c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3054c4: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x3054c4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
    // 0x3054c8: 0xad680004  sw          $t0, 0x4($t3)
    ctx->pc = 0x3054c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 8));
    // 0x3054cc: 0x4601b043  div.s       $f1, $f22, $f1
    ctx->pc = 0x3054ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
    // 0x3054d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3054d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3054d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3054d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3054d8: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x3054d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3054dc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3054dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3054e0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3054e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3054e4: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x3054e4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3054e8: 0xa1650001  sb          $a1, 0x1($t3)
    ctx->pc = 0x3054e8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3054ec: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x3054ecu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3054f0: 0xa1600003  sb          $zero, 0x3($t3)
    ctx->pc = 0x3054f0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3054f4: 0xad640008  sw          $a0, 0x8($t3)
    ctx->pc = 0x3054f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 4));
    // 0x3054f8: 0xe575000c  swc1        $f21, 0xC($t3)
    ctx->pc = 0x3054f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x3054fc: 0xe5760018  swc1        $f22, 0x18($t3)
    ctx->pc = 0x3054fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 24), bits); }
    // 0x305500: 0xe5610014  swc1        $f1, 0x14($t3)
    ctx->pc = 0x305500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 20), bits); }
    // 0x305504: 0xc5620018  lwc1        $f2, 0x18($t3)
    ctx->pc = 0x305504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x305508: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x305508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30550c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30550cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x305510: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x305510u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x305514: 0xe5600010  swc1        $f0, 0x10($t3)
    ctx->pc = 0x305514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
    // 0x305518: 0xe574001c  swc1        $f20, 0x1C($t3)
    ctx->pc = 0x305518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 28), bits); }
    // 0x30551c: 0x0  nop
    ctx->pc = 0x30551cu;
    // NOP
label_305520:
    // 0x305520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x305520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305524: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x305524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305528: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x305528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30552c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x30552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x305530: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x305530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x305534: 0x3e00008  jr          $ra
    ctx->pc = 0x305534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305534u;
        // 0x305538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30553Cu;
}
