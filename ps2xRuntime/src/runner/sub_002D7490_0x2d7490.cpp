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

// Function: sub_002D7490
// Address: 0x2d7490 - 0x2d769c
void sub_002D7490_0x2d7490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7490_0x2d7490");
#endif

    switch (ctx->pc) {
        case 0x2d74e8u: goto label_2d74e8;
        case 0x2d7578u: goto label_2d7578;
        case 0x2d7648u: goto label_2d7648;
        case 0x2d7684u: goto label_2d7684;
        default: break;
    }

    ctx->pc = 0x2d7490u;

    // 0x2d7490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d7490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d7494: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d7494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d7498: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d7498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d749c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d749cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d74a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d74a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d74a4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2d74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x2d74a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d74a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d74ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d74acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d74b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d74b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d74b4: 0x24a55bb4  addiu       $a1, $a1, 0x5BB4
    ctx->pc = 0x2d74b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23476));
    // 0x2d74b8: 0x84265bb8  lh          $a2, 0x5BB8($at)
    ctx->pc = 0x2d74b8u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x4E5BB8u));
    // 0x2d74bc: 0x34518080  ori         $s1, $v0, 0x8080
    ctx->pc = 0x2d74bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2d74c0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d74c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d74c4: 0x84275bba  lh          $a3, 0x5BBA($at)
    ctx->pc = 0x2d74c4u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x4E5BBAu));
    // 0x2d74c8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d74c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d74cc: 0x84285bbc  lh          $t0, 0x5BBC($at)
    ctx->pc = 0x2d74ccu;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E5BBCu));
    // 0x2d74d0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d74d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d74d4: 0x84295bbe  lh          $t1, 0x5BBE($at)
    ctx->pc = 0x2d74d4u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5BBEu));
    // 0x2d74d8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d74d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d74dc: 0x8c2a5bb4  lw          $t2, 0x5BB4($at)
    ctx->pc = 0x2d74dcu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5BB4u));
    // 0x2d74e0: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D74E0u;
    SET_GPR_U32(ctx, 31, 0x2D74E8u);
    ctx->pc = 0x2D74E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D74E0u;
    // 0x2d74e4: 0x240b001a  addiu       $t3, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D74E0u, 0x2D74E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D74E8u;
label_2d74e8:
    // 0x2d74e8: 0x8e490100  lw          $t1, 0x100($s2)
    ctx->pc = 0x2d74e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2d74ec: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2d74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2d74f0: 0x34466667  ori         $a2, $v0, 0x6667
    ctx->pc = 0x2d74f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2d74f4: 0x8e4800fc  lw          $t0, 0xFC($s2)
    ctx->pc = 0x2d74f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x2d74f8: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2d74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2d74fc: 0x29210a01  slti        $at, $t1, 0xA01
    ctx->pc = 0x2d74fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2561) ? 1 : 0);
    // 0x2d7500: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x2d7500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d7504: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x2d7504u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d7508: 0x0  nop
    ctx->pc = 0x2d7508u;
    // NOP
    // 0x2d750c: 0x2010  mfhi        $a0
    ctx->pc = 0x2d750cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2d7510: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2d7510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2d7514: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2d7514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d7518: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x2d7518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d751c: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x2d751cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2d7520: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x2d7520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d7524: 0x1010  mfhi        $v0
    ctx->pc = 0x2d7524u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2d7528: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2d7528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2d752c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D752Cu;
    {
        const bool branch_taken_0x2d752c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D752Cu;
        // 0x2d7530: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d752c) {
            ctx->pc = 0x2D7550u;
            goto label_2d7550;
        }
    }
    ctx->pc = 0x2D7534u;
    // 0x2d7534: 0x81300  sll         $v0, $t0, 12
    ctx->pc = 0x2d7534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x2d7538: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x2d7538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2d753c: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x2d753cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d7540: 0x0  nop
    ctx->pc = 0x2d7540u;
    // NOP
    // 0x2d7544: 0x0  nop
    ctx->pc = 0x2d7544u;
    // NOP
    // 0x2d7548: 0x8012  mflo        $s0
    ctx->pc = 0x2d7548u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2d754c: 0x0  nop
    ctx->pc = 0x2d754cu;
    // NOP
label_2d7550:
    // 0x2d7550: 0x207082b  sltu        $at, $s0, $a3
    ctx->pc = 0x2d7550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2d7554: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7554u;
    {
        const bool branch_taken_0x2d7554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7554u;
        // 0x2d7558: 0x3c05004e  lui         $a1, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7554) {
            ctx->pc = 0x2D7578u;
            goto label_2d7578;
        }
    }
    ctx->pc = 0x2D755Cu;
    // 0x2d755c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2d755cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x2d7560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d7560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7564: 0x24a55bd0  addiu       $a1, $a1, 0x5BD0
    ctx->pc = 0x2d7564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23504));
    // 0x2d7568: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d7568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d756c: 0x34488080  ori         $t0, $v0, 0x8080
    ctx->pc = 0x2d756cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2d7570: 0xc0b5da8  jal         func_2D76A0
    ctx->pc = 0x2D7570u;
    SET_GPR_U32(ctx, 31, 0x2D7578u);
    ctx->pc = 0x2D7574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7570u;
    // 0x2d7574: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D76A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D76A0u, 0x2D7570u, 0x2D7578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7578u;
label_2d7578:
    // 0x2d7578: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D7578u;
    {
        const bool branch_taken_0x2d7578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7578) {
            ctx->pc = 0x2D7648u;
            goto label_2d7648;
        }
    }
    ctx->pc = 0x2D7580u;
    // 0x2d7580: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2d7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2d7584: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d7584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d7588: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D7588u;
    {
        const bool branch_taken_0x2d7588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7588u;
        // 0x2d758c: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7588) {
            ctx->pc = 0x2D7628u;
            goto label_2d7628;
        }
    }
    ctx->pc = 0x2D7590u;
    // 0x2d7590: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2d7590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2d7594: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d7594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d7598: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2d7598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2d759c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2d759cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2d75a0: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x2d75a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x2d75a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d75a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d75a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d75ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d75acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d75b0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2d75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d75b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d75b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d75b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d75b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d75bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2d75bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2d75c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d75c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d75c8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2d75c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d75cc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2d75ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d75d0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2d75d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d75d4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d75d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d75d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d75d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d75dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D75DCu;
    {
        const bool branch_taken_0x2d75dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d75dc) {
            ctx->pc = 0x2D75F4u;
            goto label_2d75f4;
        }
    }
    ctx->pc = 0x2D75E4u;
    // 0x2d75e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d75e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d75e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d75e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d75ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D75ECu;
    {
        const bool branch_taken_0x2d75ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D75F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75ECu;
        // 0x2d75f0: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75ec) {
            ctx->pc = 0x2D7610u;
            goto label_2d7610;
        }
    }
    ctx->pc = 0x2D75F4u;
label_2d75f4:
    // 0x2d75f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d75f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d75f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d75fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d75fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d7600: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d7600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d7604: 0x0  nop
    ctx->pc = 0x2d7604u;
    // NOP
    // 0x2d7608: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d7608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d760c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2d760cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2d7610:
    // 0x2d7610: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d7610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d7614: 0x52400  sll         $a0, $a1, 16
    ctx->pc = 0x2d7614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2d7618: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x2d7618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2d761c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2d761cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d7620: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2d7620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d7624: 0xa28825  or          $s1, $a1, $v0
    ctx->pc = 0x2d7624u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2d7628:
    // 0x2d7628: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d7628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d762c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d762cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7630: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d7630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d7634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7638: 0x24a55c08  addiu       $a1, $a1, 0x5C08
    ctx->pc = 0x2d7638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
    // 0x2d763c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d763cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7640: 0xc0b5da8  jal         func_2D76A0
    ctx->pc = 0x2D7640u;
    SET_GPR_U32(ctx, 31, 0x2D7648u);
    ctx->pc = 0x2D7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7640u;
    // 0x2d7644: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D76A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D76A0u, 0x2D7640u, 0x2D7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7648u;
label_2d7648:
    // 0x2d7648: 0x92450047  lbu         $a1, 0x47($s2)
    ctx->pc = 0x2d7648u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x2d764c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2d764cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2d7650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d7650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7654: 0x24425a60  addiu       $v0, $v0, 0x5A60
    ctx->pc = 0x2d7654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23136));
    // 0x2d7658: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2d7658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2d765c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2d765cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d7660: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d7660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d7664: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d7664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7668: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x2d7668u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d766c: 0x84a70006  lh          $a3, 0x6($a1)
    ctx->pc = 0x2d766cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2d7670: 0x84a80008  lh          $t0, 0x8($a1)
    ctx->pc = 0x2d7670u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d7674: 0x84a9000a  lh          $t1, 0xA($a1)
    ctx->pc = 0x2d7674u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2d7678: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x2d7678u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d767c: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D767Cu;
    SET_GPR_U32(ctx, 31, 0x2D7684u);
    ctx->pc = 0x2D7680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D767Cu;
    // 0x2d7680: 0x240b001a  addiu       $t3, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D767Cu, 0x2D7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7684u;
label_2d7684:
    // 0x2d7684: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d7684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d7688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d768c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d768cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d7690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7694: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7694u;
        // 0x2d7698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D769Cu;
}
