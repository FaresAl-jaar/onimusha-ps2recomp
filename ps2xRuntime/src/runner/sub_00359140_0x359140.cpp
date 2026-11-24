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

// Function: sub_00359140
// Address: 0x359140 - 0x359c6c
void sub_00359140_0x359140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359140_0x359140");
#endif

    switch (ctx->pc) {
        case 0x359188u: goto label_359188;
        case 0x3591a0u: goto label_3591a0;
        case 0x3591c0u: goto label_3591c0;
        case 0x359240u: goto label_359240;
        case 0x359260u: goto label_359260;
        case 0x35928cu: goto label_35928c;
        case 0x35929cu: goto label_35929c;
        case 0x3592acu: goto label_3592ac;
        case 0x3592bcu: goto label_3592bc;
        case 0x3592ccu: goto label_3592cc;
        case 0x3592dcu: goto label_3592dc;
        case 0x3592ecu: goto label_3592ec;
        case 0x3592fcu: goto label_3592fc;
        case 0x359320u: goto label_359320;
        case 0x35935cu: goto label_35935c;
        case 0x35936cu: goto label_35936c;
        case 0x3593b8u: goto label_3593b8;
        case 0x359404u: goto label_359404;
        case 0x359418u: goto label_359418;
        case 0x359498u: goto label_359498;
        case 0x359518u: goto label_359518;
        case 0x359578u: goto label_359578;
        case 0x359598u: goto label_359598;
        case 0x3595a8u: goto label_3595a8;
        case 0x3595d0u: goto label_3595d0;
        case 0x3595fcu: goto label_3595fc;
        case 0x3596c4u: goto label_3596c4;
        case 0x359724u: goto label_359724;
        case 0x359750u: goto label_359750;
        case 0x359790u: goto label_359790;
        case 0x3597ccu: goto label_3597cc;
        case 0x3597e8u: goto label_3597e8;
        case 0x3597fcu: goto label_3597fc;
        case 0x359860u: goto label_359860;
        case 0x35986cu: goto label_35986c;
        case 0x359878u: goto label_359878;
        case 0x359880u: goto label_359880;
        case 0x3598b8u: goto label_3598b8;
        case 0x3598ecu: goto label_3598ec;
        case 0x3598f8u: goto label_3598f8;
        case 0x359904u: goto label_359904;
        case 0x359940u: goto label_359940;
        case 0x359990u: goto label_359990;
        case 0x3599a4u: goto label_3599a4;
        case 0x3599b4u: goto label_3599b4;
        case 0x3599c4u: goto label_3599c4;
        case 0x3599d4u: goto label_3599d4;
        case 0x3599e4u: goto label_3599e4;
        case 0x3599fcu: goto label_3599fc;
        case 0x359a0cu: goto label_359a0c;
        case 0x359a34u: goto label_359a34;
        case 0x359a50u: goto label_359a50;
        case 0x359a80u: goto label_359a80;
        case 0x359ac4u: goto label_359ac4;
        case 0x359b08u: goto label_359b08;
        case 0x359b14u: goto label_359b14;
        case 0x359b20u: goto label_359b20;
        case 0x359b44u: goto label_359b44;
        case 0x359b60u: goto label_359b60;
        case 0x359becu: goto label_359bec;
        case 0x359c10u: goto label_359c10;
        case 0x359c1cu: goto label_359c1c;
        case 0x359c34u: goto label_359c34;
        default: break;
    }

    ctx->pc = 0x359140u;

    // 0x359140: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x359140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x359144: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x359144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x359148: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x359148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x35914c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x35914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x359150: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x359150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x359154: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x359154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x359158: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x359158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x35915c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35915cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x359160: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x359160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x359164: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x359164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x359168: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x359168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35916c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35916cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x359170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359174: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x359174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x359178: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x359178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x35917c: 0x8e0500cc  lw          $a1, 0xCC($s0)
    ctx->pc = 0x35917cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x359180: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x359180u;
    SET_GPR_U32(ctx, 31, 0x359188u);
    ctx->pc = 0x359184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359180u;
    // 0x359184: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x359180u, 0x359188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359188u;
label_359188:
    // 0x359188: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x359188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x35918c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x35918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x359190: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x359190u;
    {
        const bool branch_taken_0x359190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359190u;
        // 0x359194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359190) {
            ctx->pc = 0x3591A8u;
            goto label_3591a8;
        }
    }
    ctx->pc = 0x359198u;
    // 0x359198: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x359198u;
    SET_GPR_U32(ctx, 31, 0x3591A0u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x359198u, 0x3591A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3591A0u;
label_3591a0:
    // 0x3591a0: 0x100002a5  b           . + 4 + (0x2A5 << 2)
    ctx->pc = 0x3591A0u;
    {
        const bool branch_taken_0x3591a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3591a0) {
            ctx->pc = 0x359C38u;
            goto label_359c38;
        }
    }
    ctx->pc = 0x3591A8u;
label_3591a8:
    // 0x3591a8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3591a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3591ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3591acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3591b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3591b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3591b4: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x3591b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3591b8: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x3591b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x3591bc: 0x0  nop
    ctx->pc = 0x3591bcu;
    // NOP
label_3591c0:
    // 0x3591c0: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x3591c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x3591c4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x3591c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x3591c8: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x3591c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3591cc: 0x86630528  lh          $v1, 0x528($s3)
    ctx->pc = 0x3591ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1320)));
    // 0x3591d0: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3591D0u;
    {
        const bool branch_taken_0x3591d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3591d0) {
            ctx->pc = 0x359300u;
            goto label_359300;
        }
    }
    ctx->pc = 0x3591D8u;
    // 0x3591d8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x3591d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x3591dc: 0x9044000c  lbu         $a0, 0xC($v0)
    ctx->pc = 0x3591dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3591e0: 0x2441818  mult        $v1, $s2, $a0
    ctx->pc = 0x3591e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3591e4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3591E4u;
    {
        const bool branch_taken_0x3591e4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3591E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3591E4u;
        // 0x3591e8: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3591e4) {
            ctx->pc = 0x3591F4u;
            goto label_3591f4;
        }
    }
    ctx->pc = 0x3591ECu;
    // 0x3591ec: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x3591ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x3591f0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3591f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_3591f4:
    // 0x3591f4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x3591f4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3591f8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3591f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3591fc: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x3591fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x359200: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x359200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x359204: 0x3810  mfhi        $a3
    ctx->pc = 0x359204u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x359208: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x359208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x35920c: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x35920cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
    // 0x359210: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x359210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x359214: 0xa2670534  sb          $a3, 0x534($s3)
    ctx->pc = 0x359214u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1332), (uint8_t)GPR_U32(ctx, 7));
    // 0x359218: 0xa6600528  sh          $zero, 0x528($s3)
    ctx->pc = 0x359218u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x35921c: 0xa660052a  sh          $zero, 0x52A($s3)
    ctx->pc = 0x35921cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1322), (uint16_t)GPR_U32(ctx, 0));
    // 0x359220: 0xa666052c  sh          $a2, 0x52C($s3)
    ctx->pc = 0x359220u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1324), (uint16_t)GPR_U32(ctx, 6));
    // 0x359224: 0xae650518  sw          $a1, 0x518($s3)
    ctx->pc = 0x359224u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1304), GPR_U32(ctx, 5));
    // 0x359228: 0xae64051c  sw          $a0, 0x51C($s3)
    ctx->pc = 0x359228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1308), GPR_U32(ctx, 4));
    // 0x35922c: 0xae630520  sw          $v1, 0x520($s3)
    ctx->pc = 0x35922cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1312), GPR_U32(ctx, 3));
    // 0x359230: 0xae620524  sw          $v0, 0x524($s3)
    ctx->pc = 0x359230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1316), GPR_U32(ctx, 2));
    // 0x359234: 0xa2600535  sb          $zero, 0x535($s3)
    ctx->pc = 0x359234u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1333), (uint8_t)GPR_U32(ctx, 0));
    // 0x359238: 0xc078bac  jal         func_1E2EB0
    ctx->pc = 0x359238u;
    SET_GPR_U32(ctx, 31, 0x359240u);
    ctx->pc = 0x35923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359238u;
    // 0x35923c: 0xa660052e  sh          $zero, 0x52E($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 1326), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EB0u, 0x359238u, 0x359240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359240u;
label_359240:
    // 0x359240: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x359240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x359244: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x359244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x359248: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x359248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35924c: 0xa6630530  sh          $v1, 0x530($s3)
    ctx->pc = 0x35924cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1328), (uint16_t)GPR_U32(ctx, 3));
    // 0x359250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x359250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359254: 0xa6620532  sh          $v0, 0x532($s3)
    ctx->pc = 0x359254u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1330), (uint16_t)GPR_U32(ctx, 2));
    // 0x359258: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x359258u;
    SET_GPR_U32(ctx, 31, 0x359260u);
    ctx->pc = 0x35925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359258u;
    // 0x35925c: 0x24a55c20  addiu       $a1, $a1, 0x5C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x359258u, 0x359260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359260u;
label_359260:
    // 0x359260: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x359260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x359264: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x359264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x359268: 0xa6630510  sh          $v1, 0x510($s3)
    ctx->pc = 0x359268u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x35926c: 0xa6600512  sh          $zero, 0x512($s3)
    ctx->pc = 0x35926cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1298), (uint16_t)GPR_U32(ctx, 0));
    // 0x359270: 0xa6620514  sh          $v0, 0x514($s3)
    ctx->pc = 0x359270u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1300), (uint16_t)GPR_U32(ctx, 2));
    // 0x359274: 0x86620510  lh          $v0, 0x510($s3)
    ctx->pc = 0x359274u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1296)));
    // 0x359278: 0xa6620516  sh          $v0, 0x516($s3)
    ctx->pc = 0x359278u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1302), (uint16_t)GPR_U32(ctx, 2));
    // 0x35927c: 0x93858340  lbu         $a1, -0x7CC0($gp)
    ctx->pc = 0x35927cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935360)));
    // 0x359280: 0x93868341  lbu         $a2, -0x7CBF($gp)
    ctx->pc = 0x359280u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935361)));
    // 0x359284: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x359284u;
    SET_GPR_U32(ctx, 31, 0x35928Cu);
    ctx->pc = 0x359288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359284u;
    // 0x359288: 0x266404d0  addiu       $a0, $s3, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x359284u, 0x35928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35928Cu;
label_35928c:
    // 0x35928c: 0x93858344  lbu         $a1, -0x7CBC($gp)
    ctx->pc = 0x35928cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935364)));
    // 0x359290: 0x93868345  lbu         $a2, -0x7CBB($gp)
    ctx->pc = 0x359290u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935365)));
    // 0x359294: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x359294u;
    SET_GPR_U32(ctx, 31, 0x35929Cu);
    ctx->pc = 0x359298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359294u;
    // 0x359298: 0x266404d0  addiu       $a0, $s3, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x359294u, 0x35929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35929Cu;
label_35929c:
    // 0x35929c: 0x93858348  lbu         $a1, -0x7CB8($gp)
    ctx->pc = 0x35929cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935368)));
    // 0x3592a0: 0x93868349  lbu         $a2, -0x7CB7($gp)
    ctx->pc = 0x3592a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935369)));
    // 0x3592a4: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x3592A4u;
    SET_GPR_U32(ctx, 31, 0x3592ACu);
    ctx->pc = 0x3592A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592A4u;
    // 0x3592a8: 0x266404e0  addiu       $a0, $s3, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x3592A4u, 0x3592ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3592ACu;
label_3592ac:
    // 0x3592ac: 0x9385834c  lbu         $a1, -0x7CB4($gp)
    ctx->pc = 0x3592acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935372)));
    // 0x3592b0: 0x9386834d  lbu         $a2, -0x7CB3($gp)
    ctx->pc = 0x3592b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935373)));
    // 0x3592b4: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x3592B4u;
    SET_GPR_U32(ctx, 31, 0x3592BCu);
    ctx->pc = 0x3592B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592B4u;
    // 0x3592b8: 0x266404e0  addiu       $a0, $s3, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x3592B4u, 0x3592BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3592BCu;
label_3592bc:
    // 0x3592bc: 0x93858350  lbu         $a1, -0x7CB0($gp)
    ctx->pc = 0x3592bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935376)));
    // 0x3592c0: 0x93868351  lbu         $a2, -0x7CAF($gp)
    ctx->pc = 0x3592c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935377)));
    // 0x3592c4: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x3592C4u;
    SET_GPR_U32(ctx, 31, 0x3592CCu);
    ctx->pc = 0x3592C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592C4u;
    // 0x3592c8: 0x266404f0  addiu       $a0, $s3, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x3592C4u, 0x3592CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3592CCu;
label_3592cc:
    // 0x3592cc: 0x93858354  lbu         $a1, -0x7CAC($gp)
    ctx->pc = 0x3592ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935380)));
    // 0x3592d0: 0x93868355  lbu         $a2, -0x7CAB($gp)
    ctx->pc = 0x3592d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935381)));
    // 0x3592d4: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x3592D4u;
    SET_GPR_U32(ctx, 31, 0x3592DCu);
    ctx->pc = 0x3592D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592D4u;
    // 0x3592d8: 0x266404f0  addiu       $a0, $s3, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x3592D4u, 0x3592DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3592DCu;
label_3592dc:
    // 0x3592dc: 0x93858358  lbu         $a1, -0x7CA8($gp)
    ctx->pc = 0x3592dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935384)));
    // 0x3592e0: 0x93868359  lbu         $a2, -0x7CA7($gp)
    ctx->pc = 0x3592e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935385)));
    // 0x3592e4: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x3592E4u;
    SET_GPR_U32(ctx, 31, 0x3592ECu);
    ctx->pc = 0x3592E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592E4u;
    // 0x3592e8: 0x26640500  addiu       $a0, $s3, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x3592E4u, 0x3592ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3592ECu;
label_3592ec:
    // 0x3592ec: 0x9385835c  lbu         $a1, -0x7CA4($gp)
    ctx->pc = 0x3592ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935388)));
    // 0x3592f0: 0x9386835d  lbu         $a2, -0x7CA3($gp)
    ctx->pc = 0x3592f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935389)));
    // 0x3592f4: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x3592F4u;
    SET_GPR_U32(ctx, 31, 0x3592FCu);
    ctx->pc = 0x3592F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592F4u;
    // 0x3592f8: 0x26640500  addiu       $a0, $s3, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x3592F4u, 0x3592FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3592FCu;
label_3592fc:
    // 0x3592fc: 0x0  nop
    ctx->pc = 0x3592fcu;
    // NOP
label_359300:
    // 0x359300: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x359300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x359304: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x359304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x359308: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x359308u;
    {
        const bool branch_taken_0x359308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359308u;
        // 0x35930c: 0x26310540  addiu       $s1, $s1, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359308) {
            ctx->pc = 0x3591C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3591c0;
        }
    }
    ctx->pc = 0x359310u;
    // 0x359310: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x359310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359314: 0x27b200f4  addiu       $s2, $sp, 0xF4
    ctx->pc = 0x359314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x359318: 0x27b10134  addiu       $s1, $sp, 0x134
    ctx->pc = 0x359318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x35931c: 0x0  nop
    ctx->pc = 0x35931cu;
    // NOP
label_359320:
    // 0x359320: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x359320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x359324: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x359324u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x359328: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x359328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x35932c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35932cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359330: 0x0  nop
    ctx->pc = 0x359330u;
    // NOP
    // 0x359334: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x359334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x359338: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x359338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x35933c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x35933cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x359340: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x359340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x359344: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x359344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x359348: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x359348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x35934c: 0x0  nop
    ctx->pc = 0x35934cu;
    // NOP
    // 0x359350: 0x0  nop
    ctx->pc = 0x359350u;
    // NOP
    // 0x359354: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x359354u;
    SET_GPR_U32(ctx, 31, 0x35935Cu);
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x359354u, 0x35935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35935Cu;
label_35935c:
    // 0x35935c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x35935cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x359360: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x359360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359364: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x359364u;
    SET_GPR_U32(ctx, 31, 0x35936Cu);
    ctx->pc = 0x359368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359364u;
    // 0x359368: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x359364u, 0x35936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35936Cu;
label_35936c:
    // 0x35936c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35936Cu;
    {
        const bool branch_taken_0x35936c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35936c) {
            ctx->pc = 0x359380u;
            goto label_359380;
        }
    }
    ctx->pc = 0x359374u;
    // 0x359374: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x359374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359378: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x359378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x35937c: 0x0  nop
    ctx->pc = 0x35937cu;
    // NOP
label_359380:
    // 0x359380: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x359380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x359384: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x359384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359388: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x359388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x35938c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35938cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359390: 0x2a62000f  slti        $v0, $s3, 0xF
    ctx->pc = 0x359390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x359394: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x359394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x359398: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x359398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x35939c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x35939Cu;
    {
        const bool branch_taken_0x35939c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3593A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35939Cu;
        // 0x3593a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35939c) {
            ctx->pc = 0x359320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359320;
        }
    }
    ctx->pc = 0x3593A4u;
    // 0x3593a4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3593a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x3593a8: 0x27b601a4  addiu       $s6, $sp, 0x1A4
    ctx->pc = 0x3593a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x3593ac: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3593acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x3593b0: 0x27b701a8  addiu       $s7, $sp, 0x1A8
    ctx->pc = 0x3593b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x3593b4: 0x27be01ac  addiu       $fp, $sp, 0x1AC
    ctx->pc = 0x3593b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_3593b8:
    // 0x3593b8: 0x8e0400c8  lw          $a0, 0xC8($s0)
    ctx->pc = 0x3593b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x3593bc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3593bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3593c0: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x3593c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x3593c4: 0x82a821  addu        $s5, $a0, $v0
    ctx->pc = 0x3593c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3593c8: 0x86a20528  lh          $v0, 0x528($s5)
    ctx->pc = 0x3593c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1320)));
    // 0x3593cc: 0x104301f4  beq         $v0, $v1, . + 4 + (0x1F4 << 2)
    ctx->pc = 0x3593CCu;
    {
        const bool branch_taken_0x3593cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3593cc) {
            ctx->pc = 0x359BA0u;
            goto label_359ba0;
        }
    }
    ctx->pc = 0x3593D4u;
    // 0x3593d4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3593d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3593d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3593d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3593dc: 0x92a50534  lbu         $a1, 0x534($s5)
    ctx->pc = 0x3593dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x3593e0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x3593e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x3593e4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x3593e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3593e8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3593e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3593ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3593ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3593f0: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x3593f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3593f4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3593f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3593f8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3593f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3593fc: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3593FCu;
    SET_GPR_U32(ctx, 31, 0x359404u);
    ctx->pc = 0x359400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3593FCu;
    // 0x359400: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3593FCu, 0x359404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359404u;
label_359404:
    // 0x359404: 0x920200d5  lbu         $v0, 0xD5($s0)
    ctx->pc = 0x359404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x359408: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x359408u;
    {
        const bool branch_taken_0x359408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359408u;
        // 0x35940c: 0x26a404d0  addiu       $a0, $s5, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359408) {
            ctx->pc = 0x3595C8u;
            goto label_3595c8;
        }
    }
    ctx->pc = 0x359410u;
    // 0x359410: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x359410u;
    SET_GPR_U32(ctx, 31, 0x359418u);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x359410u, 0x359418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359418u;
label_359418:
    // 0x359418: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x359418u;
    {
        const bool branch_taken_0x359418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359418) {
            ctx->pc = 0x359430u;
            goto label_359430;
        }
    }
    ctx->pc = 0x359420u;
    // 0x359420: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x359420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x359424: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x359424u;
    {
        const bool branch_taken_0x359424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359424u;
        // 0x359428: 0xa6a20528  sh          $v0, 0x528($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 1320), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359424) {
            ctx->pc = 0x359BA0u;
            goto label_359ba0;
        }
    }
    ctx->pc = 0x35942Cu;
    // 0x35942c: 0x0  nop
    ctx->pc = 0x35942cu;
    // NOP
label_359430:
    // 0x359430: 0x92a40534  lbu         $a0, 0x534($s5)
    ctx->pc = 0x359430u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x359434: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x359434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x359438: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x359438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35943c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x35943cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359440: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x359440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359444: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x359444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359448: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x359448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x35944c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x359450: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x359450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359454: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x359454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x359458: 0x92a40534  lbu         $a0, 0x534($s5)
    ctx->pc = 0x359458u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x35945c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x35945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x359460: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x359460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x359464: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x359464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x359468: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x359468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35946c: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x35946cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x359470: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x359470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x359474: 0x92a40534  lbu         $a0, 0x534($s5)
    ctx->pc = 0x359474u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x359478: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x359478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x35947c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x35947cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x359480: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x359480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x359484: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x359484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359488: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x359488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x35948c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x35948cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x359490: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x359490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x359494: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x359494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_359498:
    // 0x359498: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x359498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x35949c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x35949cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3594a0: 0x92a30534  lbu         $v1, 0x534($s5)
    ctx->pc = 0x3594a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x3594a4: 0x520018  mult        $zero, $v0, $s2
    ctx->pc = 0x3594a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3594a8: 0x122fc2  srl         $a1, $s2, 31
    ctx->pc = 0x3594a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3594ac: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x3594acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x3594b0: 0x2010  mfhi        $a0
    ctx->pc = 0x3594b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3594b4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3594b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3594b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3594b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3594bc: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x3594bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x3594c0: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x3594c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3594c4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3594c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3594c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3594c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3594cc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3594ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3594d0: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x3594d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3594d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3594D4u;
    {
        const bool branch_taken_0x3594d4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3594D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594D4u;
        // 0x3594d8: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3594d4) {
            ctx->pc = 0x3594E8u;
            goto label_3594e8;
        }
    }
    ctx->pc = 0x3594DCu;
    // 0x3594dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3594dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3594e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3594E0u;
    {
        const bool branch_taken_0x3594e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3594E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594E0u;
        // 0x3594e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3594e0) {
            ctx->pc = 0x359504u;
            goto label_359504;
        }
    }
    ctx->pc = 0x3594E8u;
label_3594e8:
    // 0x3594e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3594e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3594ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3594ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3594f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3594f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3594f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3594f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3594f8: 0x0  nop
    ctx->pc = 0x3594f8u;
    // NOP
    // 0x3594fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3594fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x359500: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x359500u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_359504:
    // 0x359504: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x359504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x359508: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x359508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35950c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35950cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359510: 0xc0d6728  jal         func_359CA0
    ctx->pc = 0x359510u;
    SET_GPR_U32(ctx, 31, 0x359518u);
    ctx->pc = 0x359514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359510u;
    // 0x359514: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x359CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359CA0u, 0x359510u, 0x359518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359518u;
label_359518:
    // 0x359518: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x359518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x35951c: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x35951cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x359520: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x359520u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x359524: 0x92a30534  lbu         $v1, 0x534($s5)
    ctx->pc = 0x359524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x359528: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x359528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x35952c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x35952cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x359530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x359534: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x359534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x359538: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x359538u;
    {
        const bool branch_taken_0x359538 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x35953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359538u;
        // 0x35953c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359538) {
            ctx->pc = 0x35954Cu;
            goto label_35954c;
        }
    }
    ctx->pc = 0x359540u;
    // 0x359540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359544: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x359544u;
    {
        const bool branch_taken_0x359544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359544u;
        // 0x359548: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x359544) {
            ctx->pc = 0x359564u;
            goto label_359564;
        }
    }
    ctx->pc = 0x35954Cu;
label_35954c:
    // 0x35954c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35954cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x359550: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x359550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x359554: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x359554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359558: 0x0  nop
    ctx->pc = 0x359558u;
    // NOP
    // 0x35955c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x35955cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x359560: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x359560u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_359564:
    // 0x359564: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x359564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x359568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x359568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35956c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35956cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359570: 0xc0d671c  jal         func_359C70
    ctx->pc = 0x359570u;
    SET_GPR_U32(ctx, 31, 0x359578u);
    ctx->pc = 0x359574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359570u;
    // 0x359574: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x359C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359C70u, 0x359570u, 0x359578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359578u;
label_359578:
    // 0x359578: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x359578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x35957c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x35957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x359580: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x359580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x359584: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x359584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x359588: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x359588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35958c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x35958cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x359590: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x359590u;
    SET_GPR_U32(ctx, 31, 0x359598u);
    ctx->pc = 0x359594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359590u;
    // 0x359594: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x359590u, 0x359598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359598u;
label_359598:
    // 0x359598: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x359598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x35959c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x35959cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3595a0: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3595A0u;
    SET_GPR_U32(ctx, 31, 0x3595A8u);
    ctx->pc = 0x3595A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3595A0u;
    // 0x3595a4: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3595A0u, 0x3595A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3595A8u;
label_3595a8:
    // 0x3595a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3595a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3595ac: 0x26521000  addiu       $s2, $s2, 0x1000
    ctx->pc = 0x3595acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4096));
    // 0x3595b0: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x3595b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3595b4: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x3595B4u;
    {
        const bool branch_taken_0x3595b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3595B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595B4u;
        // 0x3595b8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595b4) {
            ctx->pc = 0x359498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359498;
        }
    }
    ctx->pc = 0x3595BCu;
    // 0x3595bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3595BCu;
    {
        const bool branch_taken_0x3595bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3595bc) {
            ctx->pc = 0x3595E8u;
            goto label_3595e8;
        }
    }
    ctx->pc = 0x3595C4u;
    // 0x3595c4: 0x0  nop
    ctx->pc = 0x3595c4u;
    // NOP
label_3595c8:
    // 0x3595c8: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x3595C8u;
    SET_GPR_U32(ctx, 31, 0x3595D0u);
    ctx->pc = 0x3595CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3595C8u;
    // 0x3595cc: 0x26a404f0  addiu       $a0, $s5, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x3595C8u, 0x3595D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3595D0u;
label_3595d0:
    // 0x3595d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3595D0u;
    {
        const bool branch_taken_0x3595d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3595d0) {
            ctx->pc = 0x3595E8u;
            goto label_3595e8;
        }
    }
    ctx->pc = 0x3595D8u;
    // 0x3595d8: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x3595d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x3595dc: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x3595DCu;
    {
        const bool branch_taken_0x3595dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595DCu;
        // 0x3595e0: 0xa6a20528  sh          $v0, 0x528($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 1320), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595dc) {
            ctx->pc = 0x359BA0u;
            goto label_359ba0;
        }
    }
    ctx->pc = 0x3595E4u;
    // 0x3595e4: 0x0  nop
    ctx->pc = 0x3595e4u;
    // NOP
label_3595e8:
    // 0x3595e8: 0x920200d6  lbu         $v0, 0xD6($s0)
    ctx->pc = 0x3595e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 214)));
    // 0x3595ec: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x3595ECu;
    {
        const bool branch_taken_0x3595ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595ECu;
        // 0x3595f0: 0x26a40500  addiu       $a0, $s5, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595ec) {
            ctx->pc = 0x359788u;
            goto label_359788;
        }
    }
    ctx->pc = 0x3595F4u;
    // 0x3595f4: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x3595F4u;
    SET_GPR_U32(ctx, 31, 0x3595FCu);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x3595F4u, 0x3595FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3595FCu;
label_3595fc:
    // 0x3595fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3595FCu;
    {
        const bool branch_taken_0x3595fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3595fc) {
            ctx->pc = 0x359610u;
            goto label_359610;
        }
    }
    ctx->pc = 0x359604u;
    // 0x359604: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x359604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x359608: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x359608u;
    {
        const bool branch_taken_0x359608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359608u;
        // 0x35960c: 0xa6a20528  sh          $v0, 0x528($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 1320), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359608) {
            ctx->pc = 0x359BA0u;
            goto label_359ba0;
        }
    }
    ctx->pc = 0x359610u;
label_359610:
    // 0x359610: 0x92a40534  lbu         $a0, 0x534($s5)
    ctx->pc = 0x359610u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x359614: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x359614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x359618: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x359618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35961c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x35961cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x359620: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x359620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x359624: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x359624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359628: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x359628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x35962c: 0x92a40534  lbu         $a0, 0x534($s5)
    ctx->pc = 0x35962cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x359630: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x359630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x359634: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x359634u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x359638: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x359638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35963c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x35963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359640: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x359640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x359644: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x359644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x359648: 0x92a40534  lbu         $a0, 0x534($s5)
    ctx->pc = 0x359648u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x35964c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x35964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x359650: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x359650u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x359654: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x359654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x359658: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x359658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35965c: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x35965cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x359660: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x359660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x359664: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x359664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x359668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x359668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35966c: 0x92a30534  lbu         $v1, 0x534($s5)
    ctx->pc = 0x35966cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x359670: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x359670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x359674: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x359674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x359678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35967c: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x35967cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x359680: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x359680u;
    {
        const bool branch_taken_0x359680 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x359684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359680u;
        // 0x359684: 0x86b10530  lh          $s1, 0x530($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359680) {
            ctx->pc = 0x359694u;
            goto label_359694;
        }
    }
    ctx->pc = 0x359688u;
    // 0x359688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35968c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35968Cu;
    {
        const bool branch_taken_0x35968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35968Cu;
        // 0x359690: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35968c) {
            ctx->pc = 0x3596B0u;
            goto label_3596b0;
        }
    }
    ctx->pc = 0x359694u;
label_359694:
    // 0x359694: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x359694u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x359698: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x359698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35969c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35969cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3596a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3596a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3596a4: 0x0  nop
    ctx->pc = 0x3596a4u;
    // NOP
    // 0x3596a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3596a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3596ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3596acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3596b0:
    // 0x3596b0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3596b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x3596b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3596b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3596b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3596b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3596bc: 0xc0d6728  jal         func_359CA0
    ctx->pc = 0x3596BCu;
    SET_GPR_U32(ctx, 31, 0x3596C4u);
    ctx->pc = 0x3596C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3596BCu;
    // 0x3596c0: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x359CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359CA0u, 0x3596BCu, 0x3596C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596C4u;
label_3596c4:
    // 0x3596c4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3596c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3596c8: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x3596c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x3596cc: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x3596ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x3596d0: 0x92a30534  lbu         $v1, 0x534($s5)
    ctx->pc = 0x3596d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x3596d4: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x3596d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x3596d8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3596d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3596dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3596dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3596e0: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x3596e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x3596e4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3596E4u;
    {
        const bool branch_taken_0x3596e4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3596E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596E4u;
        // 0x3596e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596e4) {
            ctx->pc = 0x3596F8u;
            goto label_3596f8;
        }
    }
    ctx->pc = 0x3596ECu;
    // 0x3596ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3596ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3596f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3596F0u;
    {
        const bool branch_taken_0x3596f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3596F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596F0u;
        // 0x3596f4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596f0) {
            ctx->pc = 0x359710u;
            goto label_359710;
        }
    }
    ctx->pc = 0x3596F8u;
label_3596f8:
    // 0x3596f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3596f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3596fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3596fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x359700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x359700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359704: 0x0  nop
    ctx->pc = 0x359704u;
    // NOP
    // 0x359708: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x359708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35970c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x35970cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_359710:
    // 0x359710: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x359710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x359714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x359714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35971c: 0xc0d671c  jal         func_359C70
    ctx->pc = 0x35971Cu;
    SET_GPR_U32(ctx, 31, 0x359724u);
    ctx->pc = 0x359720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35971Cu;
    // 0x359720: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x359C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359C70u, 0x35971Cu, 0x359724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359724u;
label_359724:
    // 0x359724: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x359724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x359728: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x359728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35972c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x35972cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x359730: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x359730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x359734: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x359734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x359738: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x359738u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x35973c: 0x86a20510  lh          $v0, 0x510($s5)
    ctx->pc = 0x35973cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1296)));
    // 0x359740: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x359740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x359744: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x359744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x359748: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x359748u;
    SET_GPR_U32(ctx, 31, 0x359750u);
    ctx->pc = 0x35974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359748u;
    // 0x35974c: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x359748u, 0x359750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359750u;
label_359750:
    // 0x359750: 0x86a20510  lh          $v0, 0x510($s5)
    ctx->pc = 0x359750u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1296)));
    // 0x359754: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x359754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x359758: 0xa6a20510  sh          $v0, 0x510($s5)
    ctx->pc = 0x359758u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1296), (uint16_t)GPR_U32(ctx, 2));
    // 0x35975c: 0x86a30510  lh          $v1, 0x510($s5)
    ctx->pc = 0x35975cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1296)));
    // 0x359760: 0x86a20516  lh          $v0, 0x516($s5)
    ctx->pc = 0x359760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1302)));
    // 0x359764: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x359764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x359768: 0xa6a20510  sh          $v0, 0x510($s5)
    ctx->pc = 0x359768u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1296), (uint16_t)GPR_U32(ctx, 2));
    // 0x35976c: 0x86a30512  lh          $v1, 0x512($s5)
    ctx->pc = 0x35976cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1298)));
    // 0x359770: 0x86a20514  lh          $v0, 0x514($s5)
    ctx->pc = 0x359770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1300)));
    // 0x359774: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x359774u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x359778: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x359778u;
    {
        const bool branch_taken_0x359778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359778u;
        // 0x35977c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359778) {
            ctx->pc = 0x359788u;
            goto label_359788;
        }
    }
    ctx->pc = 0x359780u;
    // 0x359780: 0xa6a20512  sh          $v0, 0x512($s5)
    ctx->pc = 0x359780u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x359784: 0x0  nop
    ctx->pc = 0x359784u;
    // NOP
label_359788:
    // 0x359788: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x359788u;
    SET_GPR_U32(ctx, 31, 0x359790u);
    ctx->pc = 0x35978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359788u;
    // 0x35978c: 0x26a404e0  addiu       $a0, $s5, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x359788u, 0x359790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359790u;
label_359790:
    // 0x359790: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x359790u;
    {
        const bool branch_taken_0x359790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359790) {
            ctx->pc = 0x3597A8u;
            goto label_3597a8;
        }
    }
    ctx->pc = 0x359798u;
    // 0x359798: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x359798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x35979c: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x35979Cu;
    {
        const bool branch_taken_0x35979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3597A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35979Cu;
        // 0x3597a0: 0xa6a20528  sh          $v0, 0x528($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 1320), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35979c) {
            ctx->pc = 0x359BA0u;
            goto label_359ba0;
        }
    }
    ctx->pc = 0x3597A4u;
    // 0x3597a4: 0x0  nop
    ctx->pc = 0x3597a4u;
    // NOP
label_3597a8:
    // 0x3597a8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3597a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3597ac: 0x920300d3  lbu         $v1, 0xD3($s0)
    ctx->pc = 0x3597acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 211)));
    // 0x3597b0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x3597b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3597b4: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x3597b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x3597b8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x3597b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3597bc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3597bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3597c0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3597c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3597c4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3597C4u;
    SET_GPR_U32(ctx, 31, 0x3597CCu);
    ctx->pc = 0x3597C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3597C4u;
    // 0x3597c8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3597C4u, 0x3597CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3597CCu;
label_3597cc:
    // 0x3597cc: 0x92a30534  lbu         $v1, 0x534($s5)
    ctx->pc = 0x3597ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x3597d0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3597d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3597d4: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x3597d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x3597d8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x3597d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3597dc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3597dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3597e0: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x3597E0u;
    SET_GPR_U32(ctx, 31, 0x3597E8u);
    ctx->pc = 0x3597E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3597E0u;
    // 0x3597e4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x3597E0u, 0x3597E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3597E8u;
label_3597e8:
    // 0x3597e8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3597e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3597ec: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x3597ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x3597f0: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x3597f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x3597f4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3597F4u;
    SET_GPR_U32(ctx, 31, 0x3597FCu);
    ctx->pc = 0x3597F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3597F4u;
    // 0x3597f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3597F4u, 0x3597FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3597FCu;
label_3597fc:
    // 0x3597fc: 0x92a30534  lbu         $v1, 0x534($s5)
    ctx->pc = 0x3597fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1332)));
    // 0x359800: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x359800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x359804: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x359804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x359808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35980c: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x35980cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x359810: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x359810u;
    {
        const bool branch_taken_0x359810 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x359814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359810u;
        // 0x359814: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359810) {
            ctx->pc = 0x359824u;
            goto label_359824;
        }
    }
    ctx->pc = 0x359818u;
    // 0x359818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35981c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35981Cu;
    {
        const bool branch_taken_0x35981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35981Cu;
        // 0x359820: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35981c) {
            ctx->pc = 0x35983Cu;
            goto label_35983c;
        }
    }
    ctx->pc = 0x359824u;
label_359824:
    // 0x359824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x359824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x359828: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x359828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35982c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35982cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359830: 0x0  nop
    ctx->pc = 0x359830u;
    // NOP
    // 0x359834: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x359834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x359838: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x359838u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_35983c:
    // 0x35983c: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x35983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x359840: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x359840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x359844: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x359844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359848: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x359848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x35984c: 0x24a56c60  addiu       $a1, $a1, 0x6C60
    ctx->pc = 0x35984cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27744));
    // 0x359850: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x359850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359854: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x359854u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x359858: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x359858u;
    SET_GPR_U32(ctx, 31, 0x359860u);
    ctx->pc = 0x35985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359858u;
    // 0x35985c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x359858u, 0x359860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359860u;
label_359860:
    // 0x359860: 0x26a404c0  addiu       $a0, $s5, 0x4C0
    ctx->pc = 0x359860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1216));
    // 0x359864: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x359864u;
    SET_GPR_U32(ctx, 31, 0x35986Cu);
    ctx->pc = 0x359868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359864u;
    // 0x359868: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x359864u, 0x35986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35986Cu;
label_35986c:
    // 0x35986c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x35986cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x359870: 0xc076664  jal         func_1D9990
    ctx->pc = 0x359870u;
    SET_GPR_U32(ctx, 31, 0x359878u);
    ctx->pc = 0x359874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359870u;
    // 0x359874: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x359870u, 0x359878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359878u;
label_359878:
    // 0x359878: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x359878u;
    SET_GPR_U32(ctx, 31, 0x359880u);
    ctx->pc = 0x35987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359878u;
    // 0x35987c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x359878u, 0x359880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359880u;
label_359880:
    // 0x359880: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x359880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x359884: 0xa6a2052e  sh          $v0, 0x52E($s5)
    ctx->pc = 0x359884u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1326), (uint16_t)GPR_U32(ctx, 2));
    // 0x359888: 0x92a20535  lbu         $v0, 0x535($s5)
    ctx->pc = 0x359888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1333)));
    // 0x35988c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35988Cu;
    {
        const bool branch_taken_0x35988c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35988Cu;
        // 0x359890: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35988c) {
            ctx->pc = 0x3598A0u;
            goto label_3598a0;
        }
    }
    ctx->pc = 0x359894u;
    // 0x359894: 0x920200d7  lbu         $v0, 0xD7($s0)
    ctx->pc = 0x359894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 215)));
    // 0x359898: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x359898u;
    {
        const bool branch_taken_0x359898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359898) {
            ctx->pc = 0x359920u;
            goto label_359920;
        }
    }
    ctx->pc = 0x3598A0u;
label_3598a0:
    // 0x3598a0: 0x86a3052e  lh          $v1, 0x52E($s5)
    ctx->pc = 0x3598a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x3598a4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3598a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3598a8: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x3598A8u;
    {
        const bool branch_taken_0x3598a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3598ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3598A8u;
        // 0x3598ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3598a8) {
            ctx->pc = 0x359918u;
            goto label_359918;
        }
    }
    ctx->pc = 0x3598B0u;
    // 0x3598b0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3598b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3598b4: 0x0  nop
    ctx->pc = 0x3598b4u;
    // NOP
label_3598b8:
    // 0x3598b8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3598b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3598bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3598bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3598c0: 0x26440140  addiu       $a0, $s2, 0x140
    ctx->pc = 0x3598c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x3598c4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3598c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3598c8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x3598c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3598cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3598ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3598d0: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x3598d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3598d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3598d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3598d8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3598d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3598dc: 0x0  nop
    ctx->pc = 0x3598dcu;
    // NOP
    // 0x3598e0: 0x0  nop
    ctx->pc = 0x3598e0u;
    // NOP
    // 0x3598e4: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x3598E4u;
    SET_GPR_U32(ctx, 31, 0x3598ECu);
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x3598E4u, 0x3598ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598ECu;
label_3598ec:
    // 0x3598ec: 0x26440240  addiu       $a0, $s2, 0x240
    ctx->pc = 0x3598ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x3598f0: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3598F0u;
    SET_GPR_U32(ctx, 31, 0x3598F8u);
    ctx->pc = 0x3598F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3598F0u;
    // 0x3598f4: 0x26450140  addiu       $a1, $s2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3598F0u, 0x3598F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598F8u;
label_3598f8:
    // 0x3598f8: 0x26440340  addiu       $a0, $s2, 0x340
    ctx->pc = 0x3598f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x3598fc: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3598FCu;
    SET_GPR_U32(ctx, 31, 0x359904u);
    ctx->pc = 0x359900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3598FCu;
    // 0x359900: 0x26450140  addiu       $a1, $s2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3598FCu, 0x359904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359904u;
label_359904:
    // 0x359904: 0x86a3052e  lh          $v1, 0x52E($s5)
    ctx->pc = 0x359904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x359908: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x359908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35990c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x35990cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x359910: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x359910u;
    {
        const bool branch_taken_0x359910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359910u;
        // 0x359914: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359910) {
            ctx->pc = 0x3598B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3598b8;
        }
    }
    ctx->pc = 0x359918u;
label_359918:
    // 0x359918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x359918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35991c: 0xa2a20535  sb          $v0, 0x535($s5)
    ctx->pc = 0x35991cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1333), (uint8_t)GPR_U32(ctx, 2));
label_359920:
    // 0x359920: 0x86a2052e  lh          $v0, 0x52E($s5)
    ctx->pc = 0x359920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x359924: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x359924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x359928: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x359928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x35992c: 0x1420003e  bnez        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x35992Cu;
    {
        const bool branch_taken_0x35992c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x359930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35992Cu;
        // 0x359930: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35992c) {
            ctx->pc = 0x359A28u;
            goto label_359a28;
        }
    }
    ctx->pc = 0x359934u;
    // 0x359934: 0x26b30010  addiu       $s3, $s5, 0x10
    ctx->pc = 0x359934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x359938: 0x27b200f4  addiu       $s2, $sp, 0xF4
    ctx->pc = 0x359938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x35993c: 0x0  nop
    ctx->pc = 0x35993cu;
    // NOP
label_359940:
    // 0x359940: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x359940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x359944: 0xc6610144  lwc1        $f1, 0x144($s3)
    ctx->pc = 0x359944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35994c: 0x0  nop
    ctx->pc = 0x35994cu;
    // NOP
    // 0x359950: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x359950u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x359954: 0xe6600144  swc1        $f0, 0x144($s3)
    ctx->pc = 0x359954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 324), bits); }
    // 0x359958: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x359958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35995c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x35995cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x359960: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x359960u;
    {
        const bool branch_taken_0x359960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x359964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359960u;
        // 0x359964: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359960) {
            ctx->pc = 0x359980u;
            goto label_359980;
        }
    }
    ctx->pc = 0x359968u;
    // 0x359968: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x359968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x35996c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35996cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359970: 0x0  nop
    ctx->pc = 0x359970u;
    // NOP
    // 0x359974: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x359974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x359978: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x359978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x35997c: 0xe6600144  swc1        $f0, 0x144($s3)
    ctx->pc = 0x35997cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 324), bits); }
label_359980:
    // 0x359980: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x359980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x359984: 0x26650140  addiu       $a1, $s3, 0x140
    ctx->pc = 0x359984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
    // 0x359988: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x359988u;
    SET_GPR_U32(ctx, 31, 0x359990u);
    ctx->pc = 0x35998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359988u;
    // 0x35998c: 0x26660240  addiu       $a2, $s3, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x359988u, 0x359990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359990u;
label_359990:
    // 0x359990: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x359990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x359994: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x359994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x359998: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x359998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35999c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x35999Cu;
    SET_GPR_U32(ctx, 31, 0x3599A4u);
    ctx->pc = 0x3599A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35999Cu;
    // 0x3599a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x35999Cu, 0x3599A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599A4u;
label_3599a4:
    // 0x3599a4: 0x26640140  addiu       $a0, $s3, 0x140
    ctx->pc = 0x3599a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
    // 0x3599a8: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x3599a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3599ac: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3599ACu;
    SET_GPR_U32(ctx, 31, 0x3599B4u);
    ctx->pc = 0x3599B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3599ACu;
    // 0x3599b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3599ACu, 0x3599B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599B4u;
label_3599b4:
    // 0x3599b4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3599b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3599b8: 0x26650340  addiu       $a1, $s3, 0x340
    ctx->pc = 0x3599b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
    // 0x3599bc: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3599BCu;
    SET_GPR_U32(ctx, 31, 0x3599C4u);
    ctx->pc = 0x3599C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3599BCu;
    // 0x3599c0: 0x26660240  addiu       $a2, $s3, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3599BCu, 0x3599C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599C4u;
label_3599c4:
    // 0x3599c4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3599c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3599c8: 0x26650140  addiu       $a1, $s3, 0x140
    ctx->pc = 0x3599c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
    // 0x3599cc: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3599CCu;
    SET_GPR_U32(ctx, 31, 0x3599D4u);
    ctx->pc = 0x3599D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3599CCu;
    // 0x3599d0: 0x26660240  addiu       $a2, $s3, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3599CCu, 0x3599D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599D4u;
label_3599d4:
    // 0x3599d4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x3599d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3599d8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x3599d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3599dc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3599DCu;
    SET_GPR_U32(ctx, 31, 0x3599E4u);
    ctx->pc = 0x3599E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3599DCu;
    // 0x3599e0: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3599DCu, 0x3599E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599E4u;
label_3599e4:
    // 0x3599e4: 0x3c02bf73  lui         $v0, 0xBF73
    ctx->pc = 0x3599e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49011 << 16));
    // 0x3599e8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x3599e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3599ec: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3599ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3599f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3599f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3599f4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3599F4u;
    SET_GPR_U32(ctx, 31, 0x3599FCu);
    ctx->pc = 0x3599F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3599F4u;
    // 0x3599f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3599F4u, 0x3599FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599FCu;
label_3599fc:
    // 0x3599fc: 0x26640140  addiu       $a0, $s3, 0x140
    ctx->pc = 0x3599fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
    // 0x359a00: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x359a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x359a04: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x359A04u;
    SET_GPR_U32(ctx, 31, 0x359A0Cu);
    ctx->pc = 0x359A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A04u;
    // 0x359a08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x359A04u, 0x359A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A0Cu;
label_359a0c:
    // 0x359a0c: 0x86a2052e  lh          $v0, 0x52E($s5)
    ctx->pc = 0x359a0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x359a10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x359a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x359a14: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x359a14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x359a18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x359a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x359a1c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x359a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x359a20: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x359A20u;
    {
        const bool branch_taken_0x359a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A20u;
        // 0x359a24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a20) {
            ctx->pc = 0x359940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359940;
        }
    }
    ctx->pc = 0x359A28u;
label_359a28:
    // 0x359a28: 0x26a40140  addiu       $a0, $s5, 0x140
    ctx->pc = 0x359a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
    // 0x359a2c: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x359A2Cu;
    SET_GPR_U32(ctx, 31, 0x359A34u);
    ctx->pc = 0x359A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A2Cu;
    // 0x359a30: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x359A2Cu, 0x359A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A34u;
label_359a34:
    // 0x359a34: 0x86a2052e  lh          $v0, 0x52E($s5)
    ctx->pc = 0x359a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x359a38: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x359a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x359a3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x359a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x359a40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x359a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x359a44: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x359a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x359a48: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x359A48u;
    SET_GPR_U32(ctx, 31, 0x359A50u);
    ctx->pc = 0x359A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A48u;
    // 0x359a4c: 0x24440140  addiu       $a0, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x359A48u, 0x359A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A50u;
label_359a50:
    // 0x359a50: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x359a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x359a54: 0x86a2052e  lh          $v0, 0x52E($s5)
    ctx->pc = 0x359a54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x359a58: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x359a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x359a5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x359a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359a60: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x359a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x359a64: 0x1a200022  blez        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x359A64u;
    {
        const bool branch_taken_0x359a64 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x359A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A64u;
        // 0x359a68: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a64) {
            ctx->pc = 0x359AF0u;
            goto label_359af0;
        }
    }
    ctx->pc = 0x359A6Cu;
    // 0x359a6c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x359a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x359a70: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x359a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x359a74: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x359a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x359a78: 0x2a39821  addu        $s3, $s5, $v1
    ctx->pc = 0x359a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x359a7c: 0x245200f0  addiu       $s2, $v0, 0xF0
    ctx->pc = 0x359a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_359a80:
    // 0x359a80: 0x86a6052e  lh          $a2, 0x52E($s5)
    ctx->pc = 0x359a80u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x359a84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x359a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x359a88: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x359a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x359a8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x359a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x359a90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x359a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x359a94: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x359a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x359a98: 0x26640140  addiu       $a0, $s3, 0x140
    ctx->pc = 0x359a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
    // 0x359a9c: 0x24650140  addiu       $a1, $v1, 0x140
    ctx->pc = 0x359a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x359aa0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x359aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x359aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359aa8: 0x0  nop
    ctx->pc = 0x359aa8u;
    // NOP
    // 0x359aac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x359aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x359ab0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x359ab0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x359ab4: 0x0  nop
    ctx->pc = 0x359ab4u;
    // NOP
    // 0x359ab8: 0x0  nop
    ctx->pc = 0x359ab8u;
    // NOP
    // 0x359abc: 0xc076894  jal         func_1DA250
    ctx->pc = 0x359ABCu;
    SET_GPR_U32(ctx, 31, 0x359AC4u);
    ctx->pc = 0x1DA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA250u, 0x359ABCu, 0x359AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359AC4u;
label_359ac4:
    // 0x359ac4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x359ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359ac8: 0xc6600144  lwc1        $f0, 0x144($s3)
    ctx->pc = 0x359ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359acc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x359accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x359ad0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x359AD0u;
    {
        const bool branch_taken_0x359ad0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x359ad0) {
            ctx->pc = 0x359AE0u;
            goto label_359ae0;
        }
    }
    ctx->pc = 0x359AD8u;
    // 0x359ad8: 0xe6610144  swc1        $f1, 0x144($s3)
    ctx->pc = 0x359ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 324), bits); }
    // 0x359adc: 0x0  nop
    ctx->pc = 0x359adcu;
    // NOP
label_359ae0:
    // 0x359ae0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x359ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x359ae4: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x359ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x359ae8: 0x1e20ffe5  bgtz        $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x359AE8u;
    {
        const bool branch_taken_0x359ae8 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x359AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359AE8u;
        // 0x359aec: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359ae8) {
            ctx->pc = 0x359A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359a80;
        }
    }
    ctx->pc = 0x359AF0u;
label_359af0:
    // 0x359af0: 0x86a2052e  lh          $v0, 0x52E($s5)
    ctx->pc = 0x359af0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x359af4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x359af4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x359af8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x359AF8u;
    {
        const bool branch_taken_0x359af8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x359AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359AF8u;
        // 0x359afc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359af8) {
            ctx->pc = 0x359B38u;
            goto label_359b38;
        }
    }
    ctx->pc = 0x359B00u;
    // 0x359b00: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x359b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b04: 0x0  nop
    ctx->pc = 0x359b04u;
    // NOP
label_359b08:
    // 0x359b08: 0x26440340  addiu       $a0, $s2, 0x340
    ctx->pc = 0x359b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x359b0c: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x359B0Cu;
    SET_GPR_U32(ctx, 31, 0x359B14u);
    ctx->pc = 0x359B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B0Cu;
    // 0x359b10: 0x26450240  addiu       $a1, $s2, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x359B0Cu, 0x359B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B14u;
label_359b14:
    // 0x359b14: 0x26440240  addiu       $a0, $s2, 0x240
    ctx->pc = 0x359b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x359b18: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x359B18u;
    SET_GPR_U32(ctx, 31, 0x359B20u);
    ctx->pc = 0x359B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B18u;
    // 0x359b1c: 0x26450140  addiu       $a1, $s2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x359B18u, 0x359B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B20u;
label_359b20:
    // 0x359b20: 0x86a2052e  lh          $v0, 0x52E($s5)
    ctx->pc = 0x359b20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x359b24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x359b24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x359b28: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x359b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x359b2c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x359B2Cu;
    {
        const bool branch_taken_0x359b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359B2Cu;
        // 0x359b30: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359b2c) {
            ctx->pc = 0x359B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359b08;
        }
    }
    ctx->pc = 0x359B34u;
    // 0x359b34: 0x0  nop
    ctx->pc = 0x359b34u;
    // NOP
label_359b38:
    // 0x359b38: 0x26a40140  addiu       $a0, $s5, 0x140
    ctx->pc = 0x359b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
    // 0x359b3c: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x359B3Cu;
    SET_GPR_U32(ctx, 31, 0x359B44u);
    ctx->pc = 0x359B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B3Cu;
    // 0x359b40: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x359B3Cu, 0x359B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B44u;
label_359b44:
    // 0x359b44: 0x86a2052e  lh          $v0, 0x52E($s5)
    ctx->pc = 0x359b44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x359b48: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x359b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x359b4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x359b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x359b50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x359b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x359b54: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x359b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x359b58: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x359B58u;
    SET_GPR_U32(ctx, 31, 0x359B60u);
    ctx->pc = 0x359B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B58u;
    // 0x359b5c: 0x24440140  addiu       $a0, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x359B58u, 0x359B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B60u;
label_359b60:
    // 0x359b60: 0x86a30530  lh          $v1, 0x530($s5)
    ctx->pc = 0x359b60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x359b64: 0x86a20532  lh          $v0, 0x532($s5)
    ctx->pc = 0x359b64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1330)));
    // 0x359b68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x359b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x359b6c: 0xa6a20530  sh          $v0, 0x530($s5)
    ctx->pc = 0x359b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1328), (uint16_t)GPR_U32(ctx, 2));
    // 0x359b70: 0x86a20530  lh          $v0, 0x530($s5)
    ctx->pc = 0x359b70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x359b74: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x359b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x359b78: 0xa6a20530  sh          $v0, 0x530($s5)
    ctx->pc = 0x359b78u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1328), (uint16_t)GPR_U32(ctx, 2));
    // 0x359b7c: 0x86a20528  lh          $v0, 0x528($s5)
    ctx->pc = 0x359b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1320)));
    // 0x359b80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x359b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x359b84: 0xa6a20528  sh          $v0, 0x528($s5)
    ctx->pc = 0x359b84u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1320), (uint16_t)GPR_U32(ctx, 2));
    // 0x359b88: 0x86a30528  lh          $v1, 0x528($s5)
    ctx->pc = 0x359b88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1320)));
    // 0x359b8c: 0x86a2052a  lh          $v0, 0x52A($s5)
    ctx->pc = 0x359b8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1322)));
    // 0x359b90: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x359b90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x359b94: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x359B94u;
    {
        const bool branch_taken_0x359b94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x359b94) {
            ctx->pc = 0x359BA0u;
            goto label_359ba0;
        }
    }
    ctx->pc = 0x359B9Cu;
    // 0x359b9c: 0xa6a00528  sh          $zero, 0x528($s5)
    ctx->pc = 0x359b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1320), (uint16_t)GPR_U32(ctx, 0));
label_359ba0:
    // 0x359ba0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x359ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x359ba4: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x359ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x359ba8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x359ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x359bac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x359bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x359bb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x359bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x359bb4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x359bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x359bb8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x359bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x359bbc: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x359bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x359bc0: 0x1440fdfd  bnez        $v0, . + 4 + (-0x203 << 2)
    ctx->pc = 0x359BC0u;
    {
        const bool branch_taken_0x359bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359bc0) {
            ctx->pc = 0x3593B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3593b8;
        }
    }
    ctx->pc = 0x359BC8u;
    // 0x359bc8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x359bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x359bcc: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x359bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x359bd0: 0x920300d4  lbu         $v1, 0xD4($s0)
    ctx->pc = 0x359bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x359bd4: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x359bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x359bd8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x359bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x359bdc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x359bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x359be0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x359be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x359be4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x359BE4u;
    SET_GPR_U32(ctx, 31, 0x359BECu);
    ctx->pc = 0x359BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BE4u;
    // 0x359be8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x359BE4u, 0x359BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359BECu;
label_359bec:
    // 0x359bec: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x359becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x359bf0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x359bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x359bf4: 0x920300d3  lbu         $v1, 0xD3($s0)
    ctx->pc = 0x359bf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 211)));
    // 0x359bf8: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x359bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x359bfc: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x359bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x359c00: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x359c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x359c04: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x359c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x359c08: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x359C08u;
    SET_GPR_U32(ctx, 31, 0x359C10u);
    ctx->pc = 0x359C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C08u;
    // 0x359c0c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x359C08u, 0x359C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359C10u;
label_359c10:
    // 0x359c10: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x359c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x359c14: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x359C14u;
    SET_GPR_U32(ctx, 31, 0x359C1Cu);
    ctx->pc = 0x359C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C14u;
    // 0x359c18: 0xa20000d7  sb          $zero, 0xD7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 215), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x359C14u, 0x359C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359C1Cu;
label_359c1c:
    // 0x359c1c: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x359c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x359c20: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x359c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x359c24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x359C24u;
    {
        const bool branch_taken_0x359c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x359C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359C24u;
        // 0x359c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359c24) {
            ctx->pc = 0x359C38u;
            goto label_359c38;
        }
    }
    ctx->pc = 0x359C2Cu;
    // 0x359c2c: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x359C2Cu;
    SET_GPR_U32(ctx, 31, 0x359C34u);
    ctx->pc = 0x359C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C2Cu;
    // 0x359c30: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x359C2Cu, 0x359C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359C34u;
label_359c34:
    // 0x359c34: 0x0  nop
    ctx->pc = 0x359c34u;
    // NOP
label_359c38:
    // 0x359c38: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x359c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x359c3c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x359c3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x359c40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x359c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x359c44: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x359c44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x359c48: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x359c48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x359c4c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x359c4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x359c50: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x359c50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x359c54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x359c54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x359c58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x359c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x359c5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x359c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359c60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x359c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359c64: 0x3e00008  jr          $ra
    ctx->pc = 0x359C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359C64u;
        // 0x359c68: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359C6Cu;
}
